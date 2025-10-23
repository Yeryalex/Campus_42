/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:51:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 16:38:57 by yrodrigu         ###   ########.fr       */
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
		
		int send_status = send(client_fd, http_response, strlen(http_response), 0);	
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
	/*
	struct	addrinfo	hints, *server_info;

	std::memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;



	int status = getaddrinfo(NULL, "8080", &sock.hints, &server_info);
	if (status != 0) {
		std::cout << gai_strerror(status) << std::endl;
		return (1);
	}

	int socket_fd = create_socket(server_info);
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
    "Content-Type: text/html; charset=UTF-8\r\n"
    "Connection: close\r\n"
    "\r\n"
    "<!DOCTYPE html>\n"
    "<html>\n"
    "<head>\n"
    "    <title>My C++ Server</title>\n"
    "    <meta charset=\"UTF-8\">\n"
    "    <style>\n"
    "        body {\n"
    "            font-family: Arial, sans-serif;\n"
    "            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);\n"
    "            margin: 0;\n"
    "            padding: 0;\n"
    "            display: flex;\n"
    "            justify-content: center;\n"
    "            align-items: center;\n"
    "            min-height: 100vh;\n"
    "            color: white;\n"
    "        }\n"
    "        .container {\n"
    "            background: rgba(255, 255, 255, 0.1);\n"
    "            backdrop-filter: blur(10px);\n"
    "            border-radius: 20px;\n"
    "            padding: 40px;\n"
    "            text-align: center;\n"
    "            box-shadow: 0 8px 32px rgba(0, 0, 0, 0.3);\n"
    "            border: 1px solid rgba(255, 255, 255, 0.2);\n"
    "        }\n"
    "        h1 {\n"
    "            font-size: 3em;\n"
    "            margin-bottom: 20px;\n"
    "            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3);\n"
    "        }\n"
    "        .icon {\n"
    "            font-size: 1.5em;\n"
    "            margin-right: 10px;\n"
    "        }\n"
    "        .feature-list p {\n"
    "            font-size: 1.1em;\n"
    "            margin: 10px 0;\n"
    "        }\n"
    "        .server-info {\n"
    "            background: rgba(0, 0, 0, 0.3);\n"
    "            padding: 15px;\n"
    "            border-radius: 10px;\n"
    "            margin-top: 20px;\n"
    "            font-family: monospace;\n"
    "        }\n"
    "    </style>\n"
    "</head>\n"
    "<body>\n"
    "    <div class=\"container\">\n"
    "        <h1>🚀 C++ Web Server</h1>\n"
    "        <p>This page is served from a <strong>C++ program</strong>!</p>\n"
    "        \n"
    "        <div class=\"feature-list\">\n"
    "            <p><span class=\"icon\">✓</span> Built with raw sockets</p>\n"
    "            <p><span class=\"icon\">✓</span> Handles HTTP protocol</p>\n"
	"        </div>\n"
    "        \n"
    "        <div class=\"server-info\">\n"
    "            <p>Server: C++ Socket Program</p>\n"
    "            <p>Port: 8080</p>\n"
    "            <p>Protocol: HTTP/1.1</p>\n"
    "        </div>\n"
    "        \n"
    "        <p style=\"margin-top: 30px; font-size: 0.9em; opacity: 0.8;\">\n"
    "            Refresh the page to see the server in action!\n"
    "        </p>\n"
    "    </div>\n"
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
*/
	return (0);
}
