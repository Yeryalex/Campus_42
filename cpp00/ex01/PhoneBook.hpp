/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:54:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 17:35:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

# define RESET   "\033[0m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[38;5;228m"
# define BLUE    "\033[38;5;45m"


class PhoneBook {
	private:
		int	index;
		std::string contacts[8][5];
	public:
		PhoneBook () { index = 0;}
		~PhoneBook() {};
		void register_contacts(std::string contact[]);
		void print_phonebook();
		void header_phonebook();
		void print_contact(int pos);
};

#endif
