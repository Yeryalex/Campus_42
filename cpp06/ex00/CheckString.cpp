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
	
		if (std::isdigit(str[i]))
			alldigits++;		
	}
	if (str.length() == alldigits)
		return (1);
	return (0);
}

e_type	detectType(const std::string &str) {

	if (!dotFound(str) && !floatFound(str) && isAllDigit(str))
	{
		return (INT);
	}
	return (NONE);
}

int	convertToInt(const std::string &str) {

	int value = atoi(str.c_str());
	return (value);
}

