/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/26 18:13:31 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

class PhoneBook {
	private:
		int	index;
		std::string contacts[8][5];
	public:
		void register_contacts(std::string contact[]);
		void print_phonebook();
		PhoneBook ()
		{
			index = 0;
		}
};

void PhoneBook::print_phonebook()
{
	if (contacts[0][0])
	for (int i = 0; i < index; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < 5; j++)
			std::cout << contacts[i][j] << " " << "|" << " ";
	}
	std::cout << "\n";
}


class Contact : public PhoneBook {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string contact[5];
	public:
		std::string * add_contact_info();
		void print_contact();
		void call_contact(std::string contact[]);
};

void Contact::call_contact(std::string contact[])
{
	register_contacts(contact);
}

void    PhoneBook::register_contacts(std::string contact[])
{
    for (int i = 0; i < 5; i++)
    {
        contacts[index][i] = contact[i];
    }
	index += 1;
}


void Contact::print_contact()
{
	for (int i = 0; i < 5; i++)
			std::cout << contact[i] << "\n";
}

std::string * Contact::add_contact_info()
{
	std::cout << "Insert the following information:\n\n";
	
	std::cout << "First Name:";
	std::cin >> first_name;	

	std::cout << "Last name:";
	std::cin >> last_name;
	
	std::cout << "Nickname:";
	std::cin >> nickname;

	std::cout << "Phone Number:";
	std::cin >> phone_number;

	std::cout << "Darkest Secret:";
	std::cin >> darkest_secret;
	
	contact[0] = first_name;
	contact[1] = last_name;
	contact[2] = nickname;
	contact[3] = phone_number;
	contact[4] = darkest_secret;
	return (contact);
};

int main()
{
	Contact contact;

	std::string option;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	
	std::cout << "         Personal Phonebook!\n";
	std::cout << "------------------------------------------\n";
	
	while (1)
	{
		std::cout << "Please, select your option. (ADD, SEARCH or EXIT)\n";
		std::cin >> option;
		if (option == add)
		{
			contact.call_contact(contact.add_contact_info());
		}
		else if (option == search)
		{
			contact.print_phonebook();	
		}
		else if (option == exit)
		{
			std::cout << "\n*****Goodbye*****\n";
			return (0);
		}
	}
	return (0);
}
