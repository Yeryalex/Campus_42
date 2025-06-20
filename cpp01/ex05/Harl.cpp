/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:35:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/20 15:23:40 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Debug messages\n";
}

void	Harl::info(void)
{

	std::cout << "Info messages\n";
}

void	Harl::warning(void)
{

	std::cout << "Warning messages\n";
}

void	Harl::error(void)
{

	std::cout << "Error  messages\n";
}

void	Harl::complain(std::string level)
{
	Harl harl;

	void	(Harl::*ptrDebug)(void) = &Harl::debug;
	void	(Harl::*ptrInfo)(void) = &Harl::info;
	void	(Harl::*ptrWarning)(void) = &Harl::warning;
	void	(Harl::*ptrError)(void) = &Harl::error;
	
	if (level == "DEBUG")
		(harl.*ptrDebug)();
	if (level == "INFO")
		(harl.*ptrInfo)();
	if (level == "WARNING")
		(harl.*ptrWarning)();
	if (level == "ERROR")
		(harl.*ptrError)();
}
