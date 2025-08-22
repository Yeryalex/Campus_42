/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/18 11:53:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"
/*
CheckString::CheckString(){}

CheckString::CheckString(const CheckString &obj) {

	this->operator=(obj);
}

CheckString	&CheckString::operator=(const CheckString &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

CheckString::~CheckString() {}
*/

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
/*
int	isValid(const std::string &str) {

	if ()
}
*/


int	isChar(const std::string &str) {

	(void)str;
	return (true);
}
