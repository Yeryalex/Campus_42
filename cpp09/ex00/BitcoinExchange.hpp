/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:56:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/01 11:14:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
# 	define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <limits>
#include <iomanip>
#include <map>
#include <sstream>

#define	MAX_INT std::numeric_limits<int>::max()

void	readFile(char	*filename);

int		checkDate(std::string	line);
void	checkFormat(std::string	line,
		std::vector<std::string> &sDate,
		std::vector<double> &sValue);

int		checkTimeFormat(std::string date);
double 	checkValue(std::string line, std::vector<double> &sValue);
int		pipePosition(std::string line);
int		ft_validInt(std::string value);
void	appendDate(std::string line,
		std::vector<std::string> &sDate);

void		checkLine(std::string line, std::map<std::string, double> csvData);
std::string	getDate(std::string line);
double			getValue(std::string line);
void		readData(std::map<std::string, double>	&csvData);

#endif
