/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:39:00 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/04 15:04:55 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::header_contact()
{
    std::cout << GREEN << "/*--------------------------------------------------------------*/\n";
    std::cout << "/*                                                              */\n";
    std::cout << "/*                      Personal Phonebook!                     */\n";
    std::cout << "/*                                                              */\n";
    std::cout << "/*    Please, select only these options. (ADD, SEARCH, EXIT)    */\n";
    std::cout << "/*                                                              */\n";
    std::cout << "/*--------------------------------------------------------------*/\n\n" << RESET;
}


void	Contact::check_is_filled(std::string *word)
{
	*word = "";
	while (*word == "")
		std::getline(std::cin, *word);
}

std::string *Contact::add_contact_info()
{
	std::string enter = "enter";

	system("clear");
	header_contact();
	std::cout << "Insert the following information:\n\n";

	std::cout << "First Name:";
	check_is_filled(&first_name);

	std::cout << "Last name:";
	check_is_filled(&last_name);

	std::cout << "Nickname:";
	check_is_filled(&nickname);

	std::cout << "Phone Number:";
	std::getline(std::cin, phone_number);
	while (1)
	{ 
		if (phone_number.empty() || phone_number.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Enter a valid Phone number...\n";
			std::cout << "Phone Number:";
			std::getline(std::cin, phone_number);
		}
		else
			break ;
	}
	std::cout << "Darkest Secret:";
	check_is_filled(&darkest_secret);

	contact[0] = first_name;
	contact[1] = last_name;
	contact[2] = nickname;
	contact[3] = phone_number;
	contact[4] = darkest_secret;
	system("clear");
	header_contact();
	std::cout << "\n Contact succesfully saved!!!  Press Enter to continue...";
	while (enter != "")
		std::getline(std::cin, enter);
	system("clear");
	header_contact();
	return (contact);
};
