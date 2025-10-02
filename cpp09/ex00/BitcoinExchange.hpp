/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:56:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/02 09:33:28 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
# 	define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <map>
#include <sstream>
#include <boost/algorithm/string.hpp>

#define	MAX_INT std::numeric_limits<int>::max()

void		readFile(char	*filename);
int			checkTimeFormat(std::string date);
void		checkLine(std::string line, std::map<std::string, double> csvData);
std::string	getDate(std::string line);
double		getValue(std::string line);
void		readData(std::map<std::string, double>	&csvData);
int			isAllDigit(std::string str);
int			validNumber(std::string str);

#endif
