/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:46:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:23:26 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	printHeader(std::string message) {

	std::cout << "\033[32m" << "-------------------------------------------------------------------------------\n";
	std::cout << "--------------------" << message << "--------------------------------\n";
	std::cout << "-------------------------------------------------------------------------------\n" << "\033[0m";

}
int main() {

	printHeader("THIS IS A TEST FOR SHRUBBERY");	

	try
	{
		Bureaucrat a("Yery", 150);
		ShrubberyCreationForm f("form#010");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}
	try
	{
		Bureaucrat a("Yery", 137);
		ShrubberyCreationForm f("form#020");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}

/////////////////////////////////////////////////////////////////////////

	printHeader("THIS IS A TEST FOR ROBOTOMY");	

	try
	{
		Bureaucrat a("Yery", 46);
		RobotomyRequestForm f("form#030");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}
	try
	{
		Bureaucrat a("Yery", 45);
		RobotomyRequestForm f("form#040");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}

////////////////////////////////////////////////////////////////////////

	printHeader("TEST: PRESIDENTIAL PARDON FORM");	

	try
	{
		Bureaucrat a("Yery", 6);
		PresidentialPardonForm f("form#050");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}
	try
	{
		Bureaucrat a("Yery", 5);
		PresidentialPardonForm f("form#060");
		std::cout << f;
		a.signForm(f);
		a.executeForm(f);	
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}	
	return (0);
}
