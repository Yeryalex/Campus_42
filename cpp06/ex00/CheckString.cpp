/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 10:51:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"

int countDigits(const std::string &str) {

	int	point = str.find(".");
	int	decimals = 0;

	point++;
	while (isdigit(str[point]))
	{
		point++;
		decimals++;
	}
	if (decimals == 0)
		decimals++;
	return (decimals);
}

int	repeatedSign(const std::string &str) {

	if (str[0] != '-' || str[0] != '+') {
	
		for (unsigned int i = 1; i < str.length(); i++) {
	
			if (str[i] == '-' || str[i] == '+')
				return (1);
		}
		return (0);
	}
	for (unsigned int i = 0; i < str.length(); i++) {
	
		if (str[i] == '-' || str[i] == '+')
			return (1);
	}
	return (0);
}

int	dotFound(const std::string &str) {

	int found = 0;

	if (str[str.length() - 1] == '.')
		return (0);
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
	unsigned int	i = 0;

	if (str[0] == '-' || str[0] == '+') {
		i++;
		alldigits++;
	}
	for (; i < str.length(); i++) {
		
		if (std::isdigit(str[i]))
			alldigits++;		
	}
	if (str.length() == alldigits)
		return (1);
	return (0);
}
