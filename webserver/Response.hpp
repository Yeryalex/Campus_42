/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:30:11 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/23 16:44:12 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Socket.hpp"

const char *HTTP_RESPONSE =
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


int	HTTP_LEN = strlen(HTTP_RESPONSE);
const char *	get_http() {

	return (HTTP_RESPONSE);
}
