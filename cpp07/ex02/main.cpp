/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:59:19 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 12:38:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	Array<unsigned int> a;
	Array<std::string> b(3);
	Array<int> c(2);

	a.fillArr(10);
	a.printArray();

	b[0] = "hola ";
	b[1] = "Mundo";
	b[2] = "!";
	b.printArray();
	
	c.fillArr(20);
	c.printArray();

	std::cout << "--- Copy assignment operator ---\n";
	Array<std::string> d = b;
	Array<std::string> e(d);

	d.printArray(); 
	std::cout << "--- Copy Constructor ---\n";
	e.printArray();

	std::cout << "--- Manage exceptions ---\n";
	
	Array<float>	exceptions(3);
	try {
			exceptions[0];
			exceptions[1];
			exceptions[2];
			exceptions[3];
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
			exceptions[-1];
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	const Array<int> constant(5);

	std::cout << constant[0] << ": This value was printed from a constant array\n";

	return (0);
}
