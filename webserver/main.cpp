/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:51:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 16:45:14 by yrodrigu         ###   ########.fr       */
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

	int socket_fd = socket.create_socket();
	if (socket_fd == -1) {
		std::cout << "Creation socket failed\n";
		std::cout << strerror(errno) << std::endl;
		socket.clean_server_info();
		return (1);
	}
	std::cout << "Socket created: fd = " << socket_fd <<  std::endl;

	int bind_result = socket.binding(socket_fd);
	if (bind_result == -1) {
		std::cout << "Bind for IP and PORT failed\n";
		std::cout << strerror(errno) << std::endl;
		close(socket_fd);
		socket.clean_server_info();
		return (1);	
	}

	std::cout << "Socket Bound: bind_result = " << bind_result <<  std::endl;

	int listen_result = socket.listening(socket_fd);	
	if (listen_result == -1) {
		std::cout << "Socket listening failed\n";
		std::cout << strerror(errno) << std::endl;
		close(socket_fd);
		socket.clean_server_info();
		return (1);
	}

	std::cout << "Server listening... on PORT: 8080 " <<  std::endl;
	
	while (true) {
	
		int client_fd = socket.accepting(socket_fd);
		if (client_fd == -1) {
		
			std::cout << "Could not accept this request.\n";
			std::cout << strerror(errno) << std::endl;
			continue ;
		}
		
		int send_status = send(client_fd, get_http(), HTTP_LEN, 0);	
		if (send_status == -1) {
			std::cout << "Could not send the message to the client\n";
			std::cout << strerror(errno) << std::endl;
		}
		else {
			
			std::cout << "Message sent succesfully to the client...\n";
		}
		close(client_fd);
	}
    
	socket.clean_server_info();
    close(socket_fd);
	return (0);
}
