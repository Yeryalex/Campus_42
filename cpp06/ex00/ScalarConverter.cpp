/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/18 11:46:36 by yrodrigu         ###   ########.fr       */
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
	std::cout << dotFound(str) << " dot" << std::endl;
	std::cout << floatFound(str) << " float" << std::endl;
	
	if (!dotFound(str) && !floatFound(str))
	{
		std::cout << static_cast<char>(atoi(str.c_str())) << std::endl;
	}
}
