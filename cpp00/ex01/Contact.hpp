/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:34:17 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/28 17:21:56 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

# define RESET   "\033[0m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[38;5;228m"
# define BLUE    "\033[38;5;45m"

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string contact[5];
	public:
		~Contact () {};
		std::string * add_contact_info();
		void	check_is_filled(std::string *word);
};

#endif
