/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 13:18:36 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <iomanip>
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[38;5;228m"
#define BLUE    "\033[38;5;45m"


class PhoneBook {
	private:
		int	index;
		std::string contacts[8][5];
	public:
		void register_contacts(std::string contact[]);
		void print_phonebook();
		PhoneBook () { index = 0;}
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
};

void    PhoneBook::register_contacts(std::string contact[])
{
	for (int i = 0; i < 5; i++)
    {
        contacts[index % 8][i] = contact[i];
    }
	index++;
}

void	check_is_filled(std::string *word)
{
	*word = "";
	while (*word == "")
		std::getline(std::cin, *word);
}


std::string *Contact::add_contact_info()
{
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
	
	std::cout << GREEN << "--------------------------------------------------\n";
	std::cout << "              Personal Phonebook!\n";
	std::cout << "--------------------------------------------------\n\n" << RESET;
	
	while (1)
	{
		std::cout << "*Please, select your option. (ADD, SEARCH or EXIT)\n";
		std::getline(std::cin,option);
		if (option == add)
		{
			phonebook.register_contacts(contact.add_contact_info());
		}
		else if (option == search)
		{
			phonebook.print_phonebook();	
		}
		else if (option == exit)
		{
			std::cout << BLUE <<  "\n*****Goodbye*****\n" << RESET;
			break ;
		}
	}
	return (0);
}
