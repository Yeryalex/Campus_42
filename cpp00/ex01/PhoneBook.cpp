/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:55:26 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/29 16:56:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "messages.hpp"

void PhoneBook::print_phonebook()
{
	std::string enter = "a";
	system("clear");
	ft_main_header();
	int length_array = index > 8 ? 8 : index;
	if (!index)
	{
		std::cout << BLUE << "\n\n----------There is no any contact yet----------\n\n" << RESET;
		std::cout << "          Press Enter to continue...";
		while (enter != "")
    		std::getline(std::cin, enter);
		system("clear");
		ft_main_header();	
	}
	else
	{
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
		std::string number;
		int real_number = -1;
		
		while (true)
		{
			std::cout << "\nEnter index (0 to " << (length_array - 1) << "): ";
			std::getline(std::cin, number);
		
			if (number.empty() || number.find_first_not_of("0123456789") != std::string::npos)
			{
				std::cout << RED << "Invalid input. Please enter a number between 0 and 7.\n" << RESET;
				continue;
			}
			real_number = std::atoi(number.c_str());
		
			if (real_number < 0 || real_number >= length_array || contacts[real_number][0].empty())
			{
				std::cout << RED << "Invalid index. No contact stored in this slot.\n" << RESET;
				continue;
			}
			break;
		}
		system("clear");
		ft_main_header();
		print_contact(real_number);
	}
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
		std::cout << values[i] << contacts[pos][i] << "\n";
	}
}
