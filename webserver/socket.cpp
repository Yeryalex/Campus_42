/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   socket.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:20:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 16:23:19 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Socket.hpp"

Socket::Socket() {
	
	std::memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
	client_addr_size = sizeof(client_addr);
}

Socket::Socket(const Socket &obj) {};

Socket &Socket::operator=(const Socket &obj) { return (*this); };

Socket::~Socket() {};

int	Socket::set_addrinfo() {

	int status = getaddrinfo(NULL, "8080", &hints, &server_info);
	return (status);
}

int	Socket::create_socket() {

	int	socket_fd = socket(server_info->ai_family,
							server_info->ai_socktype,
							server_info->ai_protocol);
	return (socket_fd);
}

int	Socket::binding(int socket_fd) {

	int bind_result = bind(socket_fd,
							server_info->ai_addr,
							server_info->ai_addrlen);
	return (bind_result);
}

int	Socket::listening(int socket_fd) {

	int listen_result = listen(socket_fd, 10);
	
	return (listen_result);
}

int	Socket::accepting(int socket_fd) {

	int client_fd = accept(socket_fd,
						(struct sockaddr *)&client_addr,
						&client_addr_size);
	return (client_fd);
}

void	Socket::clean_server_info() {

	freeaddrinfo(server_info);
}
