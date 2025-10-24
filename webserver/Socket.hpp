/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Socket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:17:53 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/24 10:51:42 by yrodrigu         ###   ########.fr       */
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
#include <csignal>

class	Socket {

	private:
		int						socket_fd;
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
		int		binding();
		int		listening();
		int		accepting();
		void	clean_server_info();
		void	print_error();
};
