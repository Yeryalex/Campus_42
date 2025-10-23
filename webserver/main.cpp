/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:51:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 14:43:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <cstring>
#include <errno.h>
#include <fcntl.h>

int main()
{
	struct	addrinfo	hints, *server_info;

	std::memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;

	int status = getaddrinfo(NULL, "8080", &hints, &server_info);
	if (status != 0) {
		std::cout << gai_strerror(status) << std::endl;
		return (1);
	}

	int socket_fd = socket(server_info->ai_family,
		   					server_info->ai_socktype,
							server_info->ai_protocol);
	if (socket_fd == -1) {
	
		std::cout << "Creation socket failed\n";
		std::cout << strerror(errno) << std::endl;
		freeaddrinfo(server_info);
		return (1);
	}

	int bind_result = bind(socket_fd,
							server_info->ai_addr,
							server_info->ai_addrlen);

	if (bind_result == -1)
	{
		std::cout << "Bind failed\n";
		std::cout << strerror(errno) << std::endl;
		close(socket_fd);
		freeaddrinfo(server_info);
		return (1);
	}

	int listen_result = listen(socket_fd, 10);

	if (listen_result == -1) {
	
		std::cout << "Listen failed\n";
		std::cout << strerror(errno) << std::endl;
		close(socket_fd);
		freeaddrinfo(server_info);
		return (1);
	}
	
	while (true) {

		struct	sockaddr_storage	client_addr;
		socklen_t	client_addr_size = sizeof(client_addr);

		int client_fd = accept(socket_fd,
								(struct sockaddr*)&client_addr,
								&client_addr_size);

		if (client_fd == -1) {
			
			std::cout << "Accept failed\n";
			std::cout << strerror(errno) << std::endl;
			continue ;
		}

		const char* http_response =
			"HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Connection: close\r\n"
            "\r\n"
            "<!DOCTYPE html>\n"
            "<html>\n"
            "<head><title>My C++ Server</title></head>\n"
            "<body>\n"
            "    <h1>Hello from my C++ Server!</h1>\n"
            "    <p>This is HTML sent from a C++ program!</p>\n"
            "</body>\n"
            "</html>\r\n";	

		int send_status = send(client_fd, http_response, strlen(http_response), 0);

		if (send_status == -1) {
			std::cout << "Accept failed\n";
			std::cout << strerror(errno) << std::endl;
		}
		else {
		
			std::cout << "Sent " << send_status << " bytes of data to the client\n";
		}
		close(client_fd);
	}
	std::cout << "5. Client connected successfully!" << std::endl;
    
    freeaddrinfo(server_info);
    close(socket_fd);
    
    std::cout << "\n=== BASIC HTTP SERVER COMPLETE! ===" << std::endl;
    std::cout << "You've built a working TCP server that accepts connections!" << std::endl;

	return (0);
}
