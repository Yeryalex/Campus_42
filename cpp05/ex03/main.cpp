/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:46:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/18 09:54:41 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	printHeader(std::string message) {

	std::cout << "\033[32m" << "-------------------------------------------------------------------------------\n";
	std::cout << "--------------------" << message << "--------------------------------\n";
	std::cout << "-------------------------------------------------------------------------------\n" << "\033[0m";

}
int main() {

	printHeader("THIS IS AN INTERN JOB");	

	Intern	intern;

	AForm	*allForm[4];

	allForm[0] = intern.makeForm("ShrubberyCreationForm", "_Form#0231");
	allForm[1] = intern.makeForm("RobotomyRequestForm", "_Form#00241");
	allForm[2] = intern.makeForm("PresidentialPardonForm", "_Form#00251");
	allForm[3] = NULL;

	for (int i = 0; i < 3; i++) { 
	
		try {
		
			Bureaucrat a("Yery", 150);
			std::cout << *allForm[i];
			a.signForm(*allForm[i]);
			a.executeForm(*allForm[i]);	
		}
		catch(const std::exception &e) {
			std::cout << e.what();
		}
		try {
		
			Bureaucrat a("Yery", 1);
			std::cout << *allForm[i];
			a.signForm(*allForm[i]);
			a.executeForm(*allForm[i]);	
		}
		catch(const std::exception &e) {
			std::cout << e.what();
		}
		if (i < 2) {

		std::cout << "\033[32m";
		std::cout << "\n######################## NEW FORM WAS LAUNCH #########################\n";
		std::cout << "\033[0m";
		
		}
	}

	printHeader("TEST WHEN FORM NO EXISTS");
	AForm *fail = intern.makeForm("random Form", "random target");
	(void)fail;

	for (int i = 0; i < 3; i++)
		delete allForm[i];

	return (0);
}
