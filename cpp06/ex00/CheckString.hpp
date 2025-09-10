/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/18 11:39:32 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKSTRING_HPP
# define	CHECKSTRING_HPP

#include <cstdlib>
#include <iostream>
#include <string>

enum e_type {
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

int		dotFound(const std::string &str);
int		floatFound(const std::string &str);
int		isAllAlpha(const std::string &str);
int		isAllDigit(const std::string &str);
e_type	detectType(const std::string &str);
int		convertToInt(const std::string &str);
int		convertToDouble(const std::string &str);
int		convertToFloat(const std::string &str);
bool	isInt(const std::string &str);
bool	isDouble(const std::string &str);
bool	isFloat(const std::string &str);
void	charDisplay(int value);

#endif
