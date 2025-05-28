/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:54:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 15:02:10 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.h"
#include <iostream>
#include <string>

class PhoneBook {
	private:
		int	index;
		std::string contacts[8][5];
	public:
		PhoneBook () { index = 0;}
		~PhoneBook() {
			std::cout << "Destructor called\n";
		};
		void register_contacts(std::string contact[]);
		void print_phonebook();
};

#endif
