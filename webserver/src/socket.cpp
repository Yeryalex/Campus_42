/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   socket.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:20:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/28 11:04:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Response.hpp"
#include "Socket.hpp"

Socket::Socket(): socket_fd(-1) {
	
	std::memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
	client_addr_size = sizeof(client_addr);
}

Socket::Socket(const Socket &obj) { (void)obj; };

Socket &Socket::operator=(const Socket &obj) {
	
	(void)obj;	
	return (*this);
};

Socket::~Socket() {
	
	if (server_info) {
		freeaddrinfo(server_info);
		server_info = NULL;
	}

	if (socket_fd != -1) {	
		close(socket_fd);
		socket_fd = -1;
	}
};

int	Socket::set_addrinfo() {

	int status = getaddrinfo(NULL, "8080", &hints, &server_info);
	return (status);
}

int	Socket::create_socket() {

	this->socket_fd = socket(server_info->ai_family,
							server_info->ai_socktype,
							server_info->ai_protocol);
	if (socket_fd != -1) {

		int yes = 1;
		setsockopt(socket_fd, SOL_SOCKET, 
				SO_REUSEADDR, &yes, sizeof(yes));
		fcntl(socket_fd, F_SETFL, O_NONBLOCK);
	}
	return (this->socket_fd);
}

int	Socket::binding() {

	int bind_result = bind(socket_fd,
							server_info->ai_addr,
							server_info->ai_addrlen);
	return (bind_result);
}

int	Socket::listening() {

	int listen_result = listen(socket_fd, 10);
	
	return (listen_result);
}

int	Socket::accepting() {

	int client_fd = accept(socket_fd,
						(struct sockaddr *)&client_addr,
						&client_addr_size);
	return (client_fd);
}

void	Socket::clean_server_info() {

	freeaddrinfo(server_info);
}

void	Socket::print_error() {

	write(2, strerror(errno), strlen(strerror(errno)));
	write(2, "\n", 1);
}

int	Socket::getsocket_fd() const {

	return (socket_fd);
}

int	g_signal = true;

void    signal_handler(int signum) {

    (void)signum;
    g_signal = false;
}

int	Socket::webserver_init() {

    Socket  socket;

    int status = socket.set_addrinfo();
	if (status != 0) {
        std::cout << gai_strerror(status) << std::endl;
        return (1);
    }
    if (socket.create_socket() == -1 || socket.binding() == -1 || socket.listening() == -1)
    {
        socket.print_error();
        return (1);
    }

    std::cout << "Server listening... on PORT: 8080 " <<  std::endl;
	std::signal(SIGINT, signal_handler);

	std::vector<struct pollfd> poll_fds;
	struct pollfd server_pfd;

	server_pfd.fd = socket.getsocket_fd();
	server_pfd.events = POLLIN;
	server_pfd.revents = 0;
	poll_fds.push_back(server_pfd);

    while (g_signal) {

		int	ready = poll(poll_fds.data(), poll_fds.size(), -1);

		if (ready == -1) {
		
			if (g_signal == false)
			{
				std::cerr << "\nSignal called: " << strerror(errno) << std::endl;
				break ;
			}
		}
		
		std::vector<struct pollfd> current_fds = poll_fds;

		for (size_t i = 0; i < current_fds.size(); i++) {
			if (current_fds[i].revents & POLLIN) {
				if (current_fds[i].fd == socket.getsocket_fd()) {
				
					int client_fd = socket.accepting();
					struct pollfd client_pfd;

					client_pfd.fd = client_fd;
					client_pfd.events = POLLIN;
					client_pfd.revents = 0;
					poll_fds.push_back(client_pfd);
				} else {
				
					int client_fd = current_fds[i].fd;

					char	buffer[4096];

					int recv_status = recv(client_fd, buffer, sizeof(buffer) - 1, 0);

					if (recv_status > 0) {
					
						buffer[recv_status] = '\0';
						std::cout << "Received from client " << client_fd << ":\n" << buffer;

						send(client_fd, get_http(), HTTP_LEN, 0);
						close(client_fd);

						for (size_t j = 0; j < poll_fds.size(); j++) {
						
							if (poll_fds[j].fd == client_fd) {
							
								poll_fds.erase(poll_fds.begin() + j);
								break ;
							}
						}
					}
					else if (recv_status == 0) {
						
							std::cout << "Client " << client_fd  << " disconnected" << std::endl;
							close(client_fd);
						
							for (size_t j = 0; j < poll_fds.size(); j++) {
                            	if (poll_fds[j].fd == client_fd) {
                                	poll_fds.erase(poll_fds.begin() + j);
								break;
                            }
						}
					}
				}
			}
	}
	}
	return (0);
}
