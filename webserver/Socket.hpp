/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Socket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:17:53 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 16:45:41 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <cstring>
#include <errno.h>
#include <fcntl.h>

class	Socket {

	private:
		struct addrinfo			hints;
		struct addrinfo			*server_info;
		struct sockaddr_storage	client_addr;
		socklen_t				client_addr_size;
		Socket(const Socket &obj);
		Socket	&operator=(const Socket &obj);
	public:
		Socket();
		~Socket();
		int		set_addrinfo();
		int		create_socket();
		int		binding(int socket_fd);
		int		listening(int socket_fd);
		int		accepting(int socket_fd);
		void	clean_server_info();
};
