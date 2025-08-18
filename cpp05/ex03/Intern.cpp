/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:16:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:50:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &obj) {

	(void)obj;
}	


Intern	&Intern::operator=(const Intern &obj) {

	(void)obj;
	return (*this);
}

Intern::~Intern() {}

AForm	*Intern::makeForm(const std::string &nameForm, const std::string &targetForm) {

	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; i++) {

		if (forms[i] == nameForm) {
		
			switch (i) {
			
				case 0:
					return (new ShrubberyCreationForm(targetForm));
				case 1:
					return (new RobotomyRequestForm(targetForm));
				case 2:
					return (new PresidentialPardonForm(targetForm));
			}
		}
	}
	std::cout << "\033[31m";
	std::cout << "\nThe type form provided does not exist, try a new one.\n\n";
	std::cout << "\033[0m";
	return (NULL);

}
