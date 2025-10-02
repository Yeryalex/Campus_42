/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:03:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/02 15:17:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

	this->saveData();
}

void	BitcoinExchange::readFile(char	*filename) {

	BitcoinExchange	a;
	std::ifstream	readFile;
	std::string		line;
	
	readFile.open(filename);
	std::getline(readFile, line);
	
	while (std::getline(readFile, line))
	{
		a.setValue(line);
		a.setDate(line);
		a.checkLine(line);
	}
	readFile.close();
}

void	BitcoinExchange::nearestDate() {

	std::map<std::string, double>::iterator it;
	
	it = data.find(date);
	if (it != this->data.end())
	{
		std::cout << this->date << " | " << this->price;
		std::cout << " => " << it->second * this->price;
		std::cout << std::endl;
	}
	else
	{
		std::map<std::string, double>::iterator	iter;
		iter = this->data.lower_bound(this->date);
		if (iter == this->data.begin())
		{
			std::cout << this->date << " | " << this->price;
			std::cout << " => " << iter->second * this->price;
			std::cout << std::endl;
		}
		else
		{
			iter--;
			std::cout << this->date << " | " << this->price;
			std::cout << " => " << iter->second * this->price;
			std::cout << std::endl;
		}	
	}
}

void	BitcoinExchange::checkLine(std::string line) {

	if (this->date.empty() || this->price == - 1) {
		std::cout << "Error: bad imput => "<< line  << std::endl;
		return ;
	}
	
	switch (int(this->price)) {

		case (-2):
			std::cout << "Error: not a positive number." << std::endl;
			return ;
		case (-3):
			std::cout << "Error: too large a number." << std::endl;
			return ;
		default:
			this->nearestDate();
	}
}

void	BitcoinExchange::saveData() {
	
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
		this->data[date] = priceValue;
	}
	data.close();
}


void	BitcoinExchange::setDate(std::string line) {

	std::string			str;
	std::istringstream	ss(line);

	std::getline(ss, str, '|');

	boost::algorithm::trim(str);
	if (str.length() == 10 && checkTimeFormat(str))
		this->date = str;
	else
	{
		str.clear();
		this->date = str;
	}
}

void	BitcoinExchange::setValue(std::string line) {

	double				numValue;
	std::string			value;
	std::istringstream	ss(line);

	std::getline(ss, value, '|');
	std::getline(ss, value, '|');

	boost::algorithm::trim(value);

	if (validNumber(value))
		numValue = atof(value.c_str());
	else
	{
		this->price = -1;
		return ;
	}
	if (numValue < 0)
		this->price = -2;
	else if (numValue > 1000)
		this->price = -3;
	else
		this->price = numValue;
}

int	checkTimeFormat(std::string date) {

	std::string sYear = date.substr(0, 4).c_str();
	std::string sMonth = date.substr(5, 2).c_str();
	std::string sDay = date.substr(8, 2).c_str();
	
	if (!isAllDigit(sYear + sMonth + sDay))
		return (0);

	double year = atol(date.substr(0, 4).c_str());
	double month = atol(date.substr(5, 2).c_str());
	double day = atol(date.substr(8, 2).c_str());
	
	if (year <= 0 || month <= 0 || day <= 0)
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
