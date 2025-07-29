/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/29 16:46:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) {

	this->operator=(obj);
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string &str) {

	std::cout << str << std::endl;
	std::cout << CheckString::dotFound(str) << " dot" << std::endl;
	std::cout << CheckString::floatFound(str) << " float" << std::endl;
	if (!CheckString::dotFound(str) && CheckString::floatFound(str))
	{
	//	std::cout << "char: " << (char)stoi(str) << std::endl;
	//	std::cout << "int: " << stoi(str) << std::endl;
	//	std::cout << "float: " << (float)stoi(str) << std::endl;
	//	std::cout << "double: " << (double)stoi(str) << std::endl;
	}
}
