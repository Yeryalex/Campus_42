/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/27 21:24:12 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[38;5;94m"
#define BLUE    "\033[1;34m"


class PhoneBook {
	private:
		int	index;
		int flag;
		std::string contacts[8][5];
	public:
		void register_contacts(std::string contact[]);
		void print_phonebook();
		PhoneBook ()
		{
			index = 0;
			flag = 0;
		}
};

void	header_phonebook()
{
	std::cout << YELLOW << "\n|-------------------------------------------|\n";
	std::cout << "|     Index|First name| Last name|  nickname|";
	std::cout << "\n|-------------------------------------------|" << RESET;
}

void PhoneBook::print_phonebook()
{
	int length_array = index > 8 ? 8 : index;
	if (!index)
	{
		header_phonebook();
		std::cout << BLUE << "\n\n----------There is no any contact yet----------\n\n" << RESET;;
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

class Contact {
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
};



void    PhoneBook::register_contacts(std::string contact[])
{
	for (int i = 0; i < 5; i++)
    {
        contacts[index % 8][i] = contact[i];
    }
	index++;
}


void Contact::print_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << contact[i] << " with length of ";
		std::cout << contact[i].length() << "\n";
	}
}

std::string * Contact::add_contact_info()
{
	std::cout << "Insert the following information:\n\n";
	
	std::cout << "First Name:";
	std::getline(std::cin, first_name);

	std::cout << "Last name:";
	//std::cin >> last_name;	
	std::getline(std::cin, last_name);
	
	std::cout << "Nickname:";
	//std::cin >> nickname;
	std::getline(std::cin, nickname);
	
	std::cout << "Phone Number:";
	//std::cin >> phone_number;
	std::getline(std::cin, phone_number);
	
	std::cout << "Darkest Secret:";
	//std::cin >> darkest_secret;
	std::getline(std::cin, darkest_secret);

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
	PhoneBook phonebook;

	std::string option;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	
	std::cout << "--------------------------------------------------\n";
	std::cout << "              Personal Phonebook!\n";
	std::cout << "--------------------------------------------------\n";
	
	while (1)
	{
		std::cout << "*Please, select your option. (ADD, SEARCH or EXIT)\n";
		std::getline(std::cin,option);
		if (option == add)
		{
			phonebook.register_contacts(contact.add_contact_info());
			//contact.print_contact();
		}
		else if (option == search)
		{
			phonebook.print_phonebook();	
		}
		else if (option == exit)
		{
			std::cout << "\n*****Goodbye*****\n";
			return (0);
		}
	}
	return (0);
}
