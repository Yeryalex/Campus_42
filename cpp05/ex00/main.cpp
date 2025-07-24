/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:46:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 13:13:15 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat Bob("Bob", 1);
	std::cout << Bob;

	try {
		Bob++;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}

	try {
		Bureaucrat a("Yery", 1);
		a.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 150);
		a.decrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 1);
		a++;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 150);
		a--;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 3);
		a.incrementGrade();
		std::cout << a;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 149);
		a.decrementGrade();
		std::cout << a;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 3);
		a.incrementGrade();
		a++;
		std::cout << a;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("Yery", 3);
		a.incrementGrade();
		a++;
		++a;
		std::cout << a;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	return (0);
}
