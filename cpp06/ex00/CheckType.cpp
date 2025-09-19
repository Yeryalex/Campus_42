/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:04:53 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 10:06:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"

bool    isChar(const std::string &str) {

    char	*endptr;
    double	value = std::strtod(str.c_str(), &endptr);
    
	if (value >= 0 && value <= 127 && isAllDigit(str))
        return (1);
    return (0);
}

bool	isInt(const std::string &str) {

    long	value = atol(str.c_str());
	
	if (value > MAX_INT || value < MIN_INT)
		return (0);
	return (!dotFound(str) && !floatFound(str) && isAllDigit(str));
}

bool	isFloat(const std::string &str) {

    char	*endptr;
    double	value = std::strtod(str.c_str(), &endptr);
	
	if (value > MAX_FLOAT || value < MIN_FLOAT)
		return (0);
	return ((dotFound(str) && floatFound(str) && !extraCharsFloat(str)) || isAllDigit(str));
}

bool	isDouble(const std::string &str) {

    char	*endptr;
    double	value = std::strtod(str.c_str(), &endptr);
	
	if (value > MAX_DOUBLE || value < MIN_DOUBLE)
		return (0);
	return ((dotFound(str) && !floatFound(str) && !extraCharsDouble(str)) || isAllDigit(str));
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
