/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:35:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/21 13:21:08 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years, whereas you started working";
	std::cout << "here just last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string	message[4] = {"DEBUG","INFO","WARNING","ERROR"};
	void	(Harl::*ptrArray[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*ptrArray[i])();
					i++;
				case 1:
					(this->*ptrArray[i])();
					i++;
				case 2:
					(this->*ptrArray[i])();
					i++;
				case 3:
					(this->*ptrArray[i])();
					return ;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}
