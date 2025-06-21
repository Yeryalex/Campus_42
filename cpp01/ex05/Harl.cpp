/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:35:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/21 12:26:17 by yrodrigu         ###   ########.fr       */
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
	std::string	message[4] = {"DEBUG","INFO","WARNING","ERROR"};
	void	(Harl::*ptrArray[4])(void);

	ptrArray[0] = &Harl::debug;
	ptrArray[1] = &Harl::info;
	ptrArray[2] = &Harl::warning;
	ptrArray[3] = &Harl::error;
	
	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
		{
			(this->*ptrArray[i])();
			return ;
		}
	}
}
