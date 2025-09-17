/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/17 11:22:42 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"

int	dotFound(const std::string &str) {

	int found = 0;

	for (unsigned int i = 0; i < str.length(); i++) {
		if (str[i] == '.')
			found++;
	}
	if (found > 1)
		return (0);
	return (found);
}

int	floatFound(const std::string &str) {

	int found = 0;
	
	for (unsigned int i = 0; i < str.length(); i++) {
		if (str[i] == 'f')
			found++;
	}
	if (found > 1)
		return (0);
	return (found);
}

int	isAllAlpha(const std::string &str) { 

	for (unsigned int i = 0; i < str.length(); i++) {
	
		if (isalpha(str[i]) )
			return (1);
	}
	return (0);
}

int	isAllDigit(const std::string &str) {
	
	unsigned int	alldigits = 0;

	for (unsigned int i = 0; i < str.length(); i++) {
	
		if (std::isdigit(str[i]) || str[i] == '-' || str[i] == '+')
			alldigits++;		
	}
	if (str.length() == alldigits)
		return (1);
	return (0);
}

bool	isChar(const std::string &str) {

	int value = atoi(str.c_str());
	if (value >= 0 && value <= 127)
		return (1);
	return (0);
}

void	convertToChar(const std::string &str) {

	int value = atoi(str.c_str());

	if (std::isprint(value))
		std::cout << "char: '" << static_cast<char>(value) << "'"<< std::endl;
	else if (std::iscntrl(value))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

bool	isInt(const std::string &str) {

	long	value = atol(str.c_str());
	if (value > MAX_INT || value < MIN_INT)
		return (0);
	return (!dotFound(str) && !floatFound(str) && isAllDigit(str));
}

bool	isDouble(const std::string &str) {
	
	char	*endptr;
	double	value = std::strtod(str.c_str(), &endptr);

	if (endptr != '\0' || value > MAX_DOUBLE || value < MIN_DOUBLE)
		return (0);

	return (dotFound(str) && !floatFound(str));
}

bool	isFloat(const std::string &str) {

	char	*endptr;	
	double	value = std::strtod(str.c_str(), &endptr);	
	if (endptr != '\0' || value > MAX_FLOAT || value < MIN_FLOAT)
		return (0);
	return ((dotFound(str) && floatFound(str)) || isAllDigit(str));
}

e_type	detectType(const std::string &str) {

	if (isChar(str))
			return (CHAR);
	if (isInt(str))
			return (INT);
	if (isFloat(str))
		return (FLOAT);
	if (isDouble(str))
		return (DOUBLE);
	return (NONE);
}

void charDisplay(long value) {

	if (std::isprint(value))
		std::cout << "char: '" << static_cast<char>(value) << "'"<< std::endl;
	else if (std::iscntrl(value))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}
int	convertToInt(const std::string &str) {

	int value = atoi(str.c_str());

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;

	return (value);
}

int	convertToDouble(const std::string &str) {

	double value = atof(str.c_str());
	
	if (value == (long)value) {
		charDisplay((long)value);
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << value  << ".0" << std::endl;
	}
	else {
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << static_cast<float>(value)  <<  "f" << std::endl;
		std::cout << "double: " << value <<  std::endl;
	}
	return (value);
}

int	convertToFloat(const std::string &str) {

	float value = atof(str.c_str());
	std::cout << value << std::endl;
	if (value == (int)value) {
		charDisplay((int)value);
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << value << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
	else {
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) <<  std::endl;
	}
	return (value);
}

void	printError(void) {
		
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;	
}

void printLimits(std::string limit, int a) {

	if (a == 1) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << limit << "f" << std::endl;
		std::cout << "double: " << limit << std::endl;
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << limit  << std::endl;
		std::cout << "double: " << limit.substr(0, limit.length() - 1) << std::endl;
	}
}

int	checkLimits(const std::string &str) {

	std::string limits[6] = {"nan", "-inf", "+inf", "nanf", "-inff", "+inff"};

	for (int i = 0; i < 3; i++) {
		if (str == limits[i]) {
			return (1);
		}
	}
	for (int i = 3; i < 6; i++) {
		if (str == limits[i]) {
			return (2);
		}
	}
	return (0);
}
