/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 17:18:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "messages.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	Contact contact;
	PhoneBook phonebook;

	std::string option;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	system("clear");
	ft_main_header();	
	while (1)
	{
		std::getline(std::cin,option);
		if (std::cin.eof())
				break ;
		if (option == add)
			phonebook.register_contacts(contact.add_contact_info());
		else if (option == search)
			phonebook.print_phonebook();
		else if (option == exit)
		{
			std::cout << BLUE <<  "\n*****Goodbye*****\n" << RESET;
			break ;
		}
	}
	return (0);
}
