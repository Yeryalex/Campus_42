/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:39:00 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/29 14:59:42 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "messages.hpp"

void	Contact::check_is_filled(std::string *word)
{
	*word = "";
	while (*word == "")
		std::getline(std::cin, *word);
}

std::string *Contact::add_contact_info()
{
	std::string enter = "enter";

	std::cout << "Insert the following information:\n\n";

	std::cout << "First Name:";
	check_is_filled(&first_name);

	std::cout << "Last name:";
	check_is_filled(&last_name);

	std::cout << "Nickname:";
	check_is_filled(&nickname);

	std::cout << "Phone Number:";
	check_is_filled(&phone_number);

	std::cout << "Darkest Secret:";
	check_is_filled(&darkest_secret);

	contact[0] = first_name;
	contact[1] = last_name;
	contact[2] = nickname;
	contact[3] = phone_number;
	contact[4] = darkest_secret;
	system("clear");
	ft_main_header();
	std::cout << "\n Contact succesfully saved!!!  Press Enter to continue...\n";
	while (enter != "")
		std::getline(std::cin, enter);
	system("clear");
	ft_main_header();
	return (contact);
};
