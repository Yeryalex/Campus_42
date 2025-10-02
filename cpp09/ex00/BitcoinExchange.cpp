/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:03:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/02 09:36:29 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	readFile(char	*filename) {

	std::ifstream	readFile;
	std::string	line;
	std::map<std::string, double>	csvData;
	std::map<std::string, double>::iterator it;

	readFile.open(filename);
	readData(csvData);
	std::getline(readFile, line);
	while (std::getline(readFile, line))
	{
		checkLine(line, csvData);
	}
	readFile.close();
}

void	checkLine(std::string line, std::map<std::string, double> csvData) {
	
	std::string								date;
	double									value;
	std::map<std::string, double>::iterator it;

	date = getDate(line);
	value = getValue(line);

	if (date.empty() || value == - 1) {
		std::cout << "Error: bad imput => "<< line  << std::endl;
		return ;
	}
	
	switch (int(value)) {

		case (-2):
			std::cout << "Error: not a positive number." << std::endl;
			return ;
		case (-3):
			std::cout << "Error: too large a number." << std::endl;
			return ;
		default:
			it = csvData.find(date);	
			if (it != csvData.end())
				std::cout << date << " | " << value << " => " << it->second * value << std::endl;
	}
}

void	readData(std::map<std::string, double>	&csvData) {
	
	std::ifstream	data;
	std::string		line;

	data.open("data.csv");
	
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::string			date;
		std::string			price;
		std::istringstream	ss(line);
		
		std::getline(ss, date, ',');
		std::getline(ss, price, ',');
		
		double				priceValue;
		std::istringstream	priceStream(price);

		priceStream >> priceValue;	
			csvData[date] = priceValue;
	}
	data.close();
}

std::string	getDate(std::string line) {

	std::string	date;
	std::istringstream	ss(line);

	std::getline(ss, date, '|');

	boost::algorithm::trim(date);
	if (date.length() == 10 && checkTimeFormat(date))
		return (date);
	
	date.clear();
	return (date);
}


double	getValue(std::string line) {

	double				numValue;
	std::string			value;
	std::istringstream	ss(line);

	std::getline(ss, value, '|');
	std::getline(ss, value, '|');

	boost::algorithm::trim(value);

	if (validNumber(value))
		numValue = atof(value.c_str());
	else
		return (-1);

	if (numValue < 0)
		return (-2);
	if (numValue > 1000)
		return (-3);
	return (numValue);
}

int	checkTimeFormat(std::string date) {

	int year;
	int month;
	int day;
	std::string sYear = date.substr(0, 4).c_str();
	std::string sMonth = date.substr(5, 2).c_str();
	std::string sDay = date.substr(8, 2).c_str();
	
	if (!isAllDigit(sYear + sMonth + sDay))
		return (0);

	year = atol(date.substr(0, 4).c_str());
	month = atol(date.substr(5, 2).c_str());
	day = atol(date.substr(8, 2).c_str());
	
	if (year < 0 || month < 0 || day < 0)
		return (0);
	if (month > 12 || day > 31)
		return (0);
	return (1);
}

int	isAllDigit(std::string str) {
	
	for (int i = 0; i < str.length(); i++)
		if (!std::isdigit(str.at(i)))
			return (0);
	return (1);
}

int	validNumber(std::string str) {

	int dots = 0;
	int i = 0;

	if (isAllDigit(str))
		return (1);
	if (str[0] == '.' || str[str.length() - 1] == '.')
		return (0);
	if (str[0] == '-')
		i++;
	for ( ; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dots++;
			else
				return (0);
		}
	}
	if (dots < 2)
		return (1);
	return (0);
}
