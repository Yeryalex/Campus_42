/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:55:26 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 17:48:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "messages.hpp"

void PhoneBook::print_phonebook()
{
	system("clear");
	ft_main_header();
	int length_array = index > 8 ? 8 : index;
	if (!index)
	{
		//header_phonebook();
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
	std::string number;
	int	real_number;
	std::getline(std::cin, number);
	real_number = atoi(number.c_str());
	print_contact(real_number);
}

void    PhoneBook::register_contacts(std::string contact[])
{
	for (int i = 0; i < 5; i++)
    {
        contacts[index % 8][i] = contact[i];
    }
	index++;
}

void	PhoneBook::header_phonebook()
{
	std::cout << YELLOW << "\n|-------------------------------------------|\n";
	std::cout << "|     Index|First name| Last name|  nickname|";
	std::cout << "\n|-------------------------------------------|" << RESET;
}

void PhoneBook::print_contact(int pos)
{
	std::string values[5] = {"first_name: ", "last_name: ", "nickename :", "Phone Number: ", "Darkest Secret: "};
	for (int i = 0; i < 5; i++)
	{
		if (contacts[pos][0])
		{
			std::cout << "This index does not exist\n";
			break ;
		}

		std::cout << values[i] << contacts[pos][i] << "\n";
	}
}
