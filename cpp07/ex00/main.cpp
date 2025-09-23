/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:36:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/23 11:51:00 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {

	int	A = 1;
	int B = 2;
	float C = 10.0f;
	float D = 20.0f;

	printer("--- BEFORE SWAPING ---\n");	
	std::cout << "A: " << A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "D: " << D << std::endl;

	swap(A, B);
	swap(C, D);
	
	printer("\n--- AFTER SWAPING ---\n");
	std::cout << "A: " << A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "D: " << D << std::endl;

	printer("\n--- MIN VALUES ---\n");
	std::cout << "(5, 10):       " << min(5, 10) << std::endl;	
	std::cout << "(5.0f, 10.0f): " << min(5.0f, 10.0f) << std::endl;	
	std::cout << "(5.0, 10.0):   " << min(5.0, 10.0) << std::endl;	
	std::cout << "(-5, -10):    " << min(-5, -10) << std::endl;	
	
	printer("\n--- MAX VALUES ---\n");
	std::cout << "(5, 10):       " << max(5, 10) << std::endl;	
	std::cout << "(5.0f, 10.0f): " << max(5.0f, 10.0f) << std::endl;	
	std::cout << "(5.0, 10.0):   " << max(5.0, 10.0) << std::endl;	
	std::cout << "(-5, -10):    " << max(-5, -10) << std::endl;

	printer("\n--- SUBJECT TESTS ---\n");
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
