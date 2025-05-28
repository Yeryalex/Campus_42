/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:55:26 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 14:57:02 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::print_phonebook()
{
	int length_array = index > 8 ? 8 : index;
	if (!index)
	{
		header_phonebook();
		std::cout << BLUE << "\n\n----------There is no any contact yet----------\n\n" << RESET;
	}
	else
		header_phonebook();
	for (int i = 0; i < length_array; i++)
	{
		std::cout << "\n";
		std::cout << "|         " << i;
		for (int j = 0; j < 3; j++)
		{
			std::string temp;
			temp = contacts[i][j];
			std::cout << "|";

			if (temp.length() < 10)
			{
				char spaces;
				spaces = std::cout.fill(' ');
				std::cout.width(10);
				std::cout.fill(spaces);
				std::cout << contacts[i][j];
			}
			else
			{
				temp.erase(10, temp.length());
				temp[9] = '.';
				std::cout << temp;
			}
			if (j == 2)
				std::cout << "|";
		}
	}
	std::cout << "\n\n";
}

void    PhoneBook::register_contacts(std::string contact[])
{
	for (int i = 0; i < 5; i++)
    {
        contacts[index % 8][i] = contact[i];
    }
	index++;
}
