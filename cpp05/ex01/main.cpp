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
#include "Form.hpp"

int main() {
	
	try {
		Form f("Form#001_", 50, 50);
		std::cout << f;
		Bureaucrat a("Yery", 10);
		a.signForm(f);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}
	try {
		Form f2("Form#002_", 2, 2);
		std::cout << f2;
		Bureaucrat a("Yery", 10);
		a.signForm(f2);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}
	try {
		Form f2("Form#002_", 200, 2);
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		
		Form f2("Form#002_", 0, 2);
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		
		Form f2("Form#002_", 15, 123213);
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		
		Form f2("Form#002_", -12, 13);
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
