/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 15:14:30 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	header_phonebook()
{
	std::cout << YELLOW << "\n|-------------------------------------------|\n";
	std::cout << "|     Index|First name| Last name|  nickname|";
	std::cout << "\n|-------------------------------------------|" << RESET;
}

int main()
{
	Contact contact;
	PhoneBook phonebook;

	std::string option;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	
	std::cout << GREEN << "--------------------------------------------------\n";
	std::cout << "              Personal Phonebook!\n";
	std::cout << "--------------------------------------------------\n\n" << RESET;
	
	while (1)
	{
		std::cout << "*Please, select your option. (ADD, SEARCH or EXIT)\n";
		std::getline(std::cin,option);
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
