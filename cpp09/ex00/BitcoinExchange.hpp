/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:56:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/29 12:23:35 by yrodrigu         ###   ########.fr       */
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

#define	MAX_INT std::numeric_limits<int>::max()

void	readFile(char	*filename);
void	checkDate(std::string	line);
void	checkFormat(std::string line);
int		checkTimeFormat(std::string date);
int 	checkValue(std::string line);

#endif
