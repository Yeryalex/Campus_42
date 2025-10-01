/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:55:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/01 10:30:14 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cout << "Error: could not open file.\n", 1);

	readFile(argv[1]);
/*
	std::string	str = "2011-01-03,56";
	std::istringstream ss(str);
	std::string		date;
	std::string		price;


	std::getline(ss,date, ',');
	std::getline(ss,price, ',');
	std::cout << date << std::endl;
	std::cout << price << std::endl;


	std::string name;
	
	std::getline(std::cin, name);
	
	std::cout << name << std::endl;	

	std::stringstream ss;	
	std::string	str = "123.697f";

	double	num;
	double	value;
	ss.str(str);

	num = atof(str.c_str());
	std::cout << num << std::endl;
	
	ss >> value;
	std::cout << value << std::endl;


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
