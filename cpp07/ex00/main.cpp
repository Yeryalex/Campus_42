/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:36:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/23 09:20:25 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {

	int	a = 1;
	int b = 2;
	float c = 10.0f;
	float d = 20.0f;

	printer("--- BEFORE SWAPING ---\n");	
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	swap(a, b);
	swap(c, d);
	
	printer("\n--- AFTER SWAPING ---\n");
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

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
	
	return (0);
}
