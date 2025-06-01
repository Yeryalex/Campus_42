/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/01 14:48:41 by yrodrigu         ###   ########.fr       */
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
	while (1)
	{
		if (option.empty() || option != search || option != add || option != exit)
			system("clear");
		ft_main_header();
		std::cout << "> ";	
		std::getline(std::cin,option);
        if (std::cin.eof())
			break ;
		if (option == add)
			phonebook.register_contacts(contact.add_contact_info());
		else if (option == search)
			phonebook.print_phonebook();
		else if (option == exit)
		{
			system("clear");
			ft_main_header();
			std::cout << BLUE <<  "\n\n                  *****Goodbye*****\n\n" << RESET;
			break ;
		}
	}
	return (0);
}
