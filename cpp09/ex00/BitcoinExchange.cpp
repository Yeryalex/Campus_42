/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:03:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/01 09:28:44 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



void	readFile(char	*filename) {

	std::ifstream	readFile;
	std::string	line;

	readFile.open(filename);
	while (std::getline(readFile, line))
	{
//		std::cout << line << std::endl;
		checkLine(line);
	}
	readFile.close();
}

void	checkLine(std::string line) {
	
	std::map<std::string, double>	data;
	std::string						date;

	data.insert({getDate(line), getValue(line)});

	std::cout << data.at(getDate(line)) << std::endl;
}

std::string	getDate(std::string line) {

	std::string	date;

	if (line.length() >= 10) {
				
		date = line.substr(0, 10);	
		if (checkTimeFormat(date))
			return (date);
	}
	else
		return (date);
	return (date);
}


double	getValue(std::string line) {

	double		numValue;
	std::string	value;

	if (line.length() >= 13) {
	
		value = line.substr(13, line.length() - 1);
		numValue = atof(value.c_str());
		return (numValue);
	}
	return (-1);
}








/*
void	printData(std::vector<std::string> sDate, std::vector<double> sValue) {

	for (int i = 0; i < sDate.size(); i++) {
	
		switch ((int)sValue[i]) {
		
			case (-1):
				std::cout << "Error: not a positive number.\n";
				continue ;
			case (-2):
				std::cout << "Error: too large a number.\n";
				continue ;
			case (-3):
				std::cout << "Error: bad input => "<<sDate[i]<<"\n";
				continue ;
		}
		std::cout << sDate[i] << " | " << sValue[i] << std::endl;
	}
}

void	readFile(char	*filename) {

	std::ifstream		readFile;
	std::string			line;
	std::vector<std::string>	sDate;
	std::vector<double>			sValue;

	readFile.open(filename);
	
	std::getline(readFile, line);
	while (std::getline(readFile, line))
	{
		checkFormat(line, sDate, sValue);	
	}
	printData(sDate, sValue);
	readFile.close();
}

void	checkFormat(std::string	line, std::vector<std::string> &sDate, std::vector<double> &sValue) {
	
	int							dateValue;
	double						chValue;
	int							pipePos;

	appendDate(line, sDate);
	chValue = checkValue(line, sValue);
	pipePos = pipePosition(line);
}

int	checkDate(std::string line)
{
	std::string	date;
	
	if (line.length() > 10) {
		
		date = line.substr(0, 10);
		if (checkTimeFormat(date))
			return (1);
	}
	else
		return (0);
	return (-1);
}

void	appendDate(std::string line, std::vector<std::string> &sDate) {

	std::string	date;

	if (line.length() >= 10)
		date = line.substr(0, 10);
	else
		date = line.substr(0, line.length() -1);
	sDate.push_back(date);
}
*/
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
/*
double	checkValue(std::string line, std::vector<double> &sValue) {
	
	std::string	value;
	double		numValue;
	
	if (line.length() >= 13)
	{
		value = line.substr(13, line.length() - 1);
		numValue = std::atof(value.c_str());
		if (numValue < 0)
			return (sValue.push_back(-1), -1);
		if (numValue > MAX_INT || numValue > 1000)
			return (sValue.push_back(-2), -2);
		return (sValue.push_back(numValue), numValue);
	}
	return (sValue.push_back(-3), -3);
}

int	pipePosition(std::string line) {

	int			pos;

	pos = line.find(" | ");
	return (pos);
}

int	ft_validInt(std::string value) {

	int	sign = 0;
	int i  = 0;

	for (; i < value.length(); i++)
	{
		if (value[i] == '-')
			i++; sign++;
		if (!std::isdigit(value[i]))
			return (0);
	}
	if (sign > 1)
		return (0);
	return (1);
}*/
