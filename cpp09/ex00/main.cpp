/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:55:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/01 09:26:51 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cout << "Error: could not open file.\n", 1);

	readFile(argv[1]);
/*
	std::map<std::string, int> data;
	std::map<std::string, int>::iterator it;


	std::string str = std::string(); 
	data.insert({str, 3});
	data.insert({"str", 3});
	
	it = data.find(str);
	if (it != data.end())
	{
		if (!it->first.empty())
			std::cout << it->first << std::endl;
	}	
		//std::cout << data.at("") << std::endl;	
	//std::cout << str.empty() << std::endl;	
*/	return (0);
}
