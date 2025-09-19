/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 08:48:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKSTRING_HPP
# define	CHECKSTRING_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#define MAX_INT		std::numeric_limits<int>::max()
#define MIN_INT		std::numeric_limits<int>::min()
#define MAX_FLOAT	std::numeric_limits<float>::max()
#define MIN_FLOAT	(-std::numeric_limits<float>::max())
#define MAX_DOUBLE	std::numeric_limits<double>::max()
#define MIN_DOUBLE	(-std::numeric_limits<double>::max())

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
void	convertToChar(const std::string &str);
int		convertToInt(const std::string &str);
int		convertToDouble(const std::string &str);
int		convertToFloat(const std::string &str);
bool	isChar(const std::string &str);
bool	isInt(const std::string &str);
bool	isDouble(const std::string &str);
bool	isFloat(const std::string &str);
void	charDisplay(long value);
int		checkLimits(const std::string &str);
void	printLimits(std::string limit, int a);
void	printError(void);
int		countDigits(const std::string &str);
int		repeatedChar(const std::string &str);
int		extraChars(const std::string &str);

#endif
