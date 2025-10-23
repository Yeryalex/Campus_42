/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:51:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 18:06:47 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Socket.hpp"
#include "Response.hpp"

int main()
{
	Socket	socket;

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
	
	while (true) {
	
		int client_fd = socket.accepting();
		if (client_fd == -1) {
		
			std::cout << "Could not accept this request.\n";
			std::cout << strerror(errno) << std::endl;
			continue ;
		}
		int send_status = send(client_fd, get_http(), HTTP_LEN, 0);	
		if (send_status == -1) {
			socket.print_error();
		}
		else {	
			std::cout << "Message sent succesfully to the client...\n";
		}
		close(client_fd);
	}
	return (0);
}
