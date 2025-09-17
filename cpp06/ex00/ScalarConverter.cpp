/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/17 10:49:02 by yrodrigu         ###   ########.fr       */
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

void ScalarConverter::convert(const std::string &str) {

	if (checkLimits(str))
	{
		printLimits(str, checkLimits(str));
		return ;
	}
	e_type type = detectType(str);
	switch (type)
	{
		case CHAR:
			convertToChar(str);
			break ;
		case INT:
			convertToInt(str);
			break ;
		case FLOAT:
			convertToFloat(str);
			break ;
		case DOUBLE:
			convertToDouble(str);
			break ;
		case NONE:
			printError();
			break ;
	}
}
