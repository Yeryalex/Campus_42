/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:13:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/26 13:13:16 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	randomNumbers() {

	std::cout << "\n--- RANDOM NUMBERS TESTS ---\n";
	try {
			
		Span	b(10);	
		b.fillContainer();
		b.printSpan();
		std::cout << "shortest: " <<  b.shortestSpan() << std::endl;
		std::cout << "largest: " << b.longestSpan() << std::endl;
		
		std::cout << "\nAdding more numbers that available:\n"<< std::endl;
		b.addNumber(63);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	emptyContainer() {
	
	std::cout << "\n--- EMPTY CONTAINER TESTS ---\n";
	
	try {
		Span	b(1);	
		b.fillContainer();
		std::cout << "Prints only one value: ";
		b.printSpan();
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span	b(1);	
		b.fillContainer();
		b.popBack();
		b.printSpan();
		std::cout << "\n*******Prints nothing since is an empty container********\n";
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	muchNumbers() {

	std::cout << "\n--- MUCH NUMBERS TESTS ---\n";
	
	try {
		Span	b(500);	
		b.fillContainer();
		std::cout << "shortest: " <<  b.shortestSpan() << std::endl;
		std::cout << "largest: " << b.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--- INSERT VALUES BY ITERATORS TESTS ---\n";
	
	try {
		Span	b(10000);
		Span	c(10000);

		b.fillContainer();
		c.addNumber(b.getContainer().begin(), b.getContainer().end());

		std::cout << "OBJECT B shortest: " <<  b.shortestSpan() << std::endl;
		std::cout << "OBJECT B largest: " << b.longestSpan() << std::endl;
		std::cout << "OBJECT C shortest: " <<  b.shortestSpan() << std::endl;
		std::cout << "OBJECT C largest: " << b.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span	b(10);
		Span	c(4);	
		
		std::cout << "\nInserting more values than the available space:\n";
		
		b.fillContainer();
		c.addNumber(b.getContainer().begin(), b.getContainer().end());
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {

	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "--- SUBJECT TESTS ---\n";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	randomNumbers();
	emptyContainer();
	muchNumbers();

	return (0);
}
