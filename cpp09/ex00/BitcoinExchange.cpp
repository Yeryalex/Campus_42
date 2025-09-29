/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:03:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/29 12:25:22 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	readFile(char	*filename) {

	std::ifstream	readFile;
	std::string		line;

	readFile.open(filename);
	
	while (std::getline(readFile, line))
	{
	//	std::cout << line << std::endl;
		checkFormat(line);
	}
	readFile.close();
}

void	checkFormat(std::string	line) {

	checkDate(line);	
}

void	checkDate(std::string line) {
	
	std::string	date;
	int			pos = line.find("|");
	
	date = line.substr(0, pos);
	if (pos != -1 && date.length() == 11 && date[10] == ' ')
	{
		if (checkTimeFormat(date) && checkValue(line))
			std::cout << date << std::endl;
		else
			std::cout << "Error: bad input => " << line << std::endl;
	}
	else
		std::cout << "Error: bad input => " << line << std::endl;
}

int	checkTimeFormat(std::string date) {

	int year;
	int month;
	int day;

	year = atol(date.substr(0, 4).c_str());
	month = atol(date.substr(5, 2).c_str());
	day = atol(date.substr(8, 2).c_str());
	
	if (year < 0 || month < 0 || day < 0)
		return (0);
	if (month > 12 || day > 31)
		return (0);
	return (1);
}

int 	checkValue(std::string line) {
	
	std::string	value;
	double		numValue;

	value = line.substr(12, line.length() - 1);
	numValue = std::atof(value.c_str());
	
	if (numValue > MAX_INT)
		return(0);
//	std::cout << "VALUE: " << numValue << std::endl;
	return (1);
}
