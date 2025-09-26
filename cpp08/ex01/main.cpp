/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:13:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/26 12:30:22 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
/*
	Span a(10);

	a.addNumber(6);
	a.addNumber(31);
	a.addNumber(86);
	a.addNumber(4);
	a.addNumber(34);
	a.addNumber(22);
	a.addNumber(645);
	a.addNumber(332);
	a.addNumber(25);
	a.addNumber(78);
	
	try {
		a.addNumber(3);
		a.addNumber(1);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << a.longestSpan() << std::endl;*/

	try {	
	
/*	Span sp = Span(5);
	sp.addNumber(6);
	sp.printSpan();
	sp.popBack();
	sp.printSpan();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;	

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
*/
	Span	b(10);
	Span	c(5);
	b.fillContainer();	
	b.printSpan();
	std::cout << "---------------------------------------------\n"; 
 	
	c.addNumber(b.getContainer().begin(), b.getContainer().end());
	c.printSpan();	
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
