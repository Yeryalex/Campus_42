/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:56:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/02 15:18:30 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
# 	define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <map>
#include <sstream>
#include <boost/algorithm/string.hpp>

class BitcoinExchange {

	private:
		std::map<std::string, double>	data;
		std::string						date;
		double							price;	
	public:
		BitcoinExchange();
		~BitcoinExchange() {}

	static void		readFile(char	*filename);
	void		saveData();
	void		checkLine(std::string line);
	void	setDate(std::string line);
	void	setValue(std::string line);
	void	nearestDate();
};

int			isAllDigit(std::string str);
int			validNumber(std::string str);
int			checkTimeFormat(std::string date);

#endif
