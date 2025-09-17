/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:55 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/17 10:13:56 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <typeinfo>

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cout << "Pass only one argument.\n", 1);

/*	std::cout << MAX_INT << std::endl;
	std::cout << MIN_INT << std::endl;
	std::cout << MAX_FLOAT << std::endl;
	std::cout << MIN_FLOAT << std::endl;
	std::cout << MAX_DOUBLE << std::endl;
	std::cout << MIN_DOUBLE << std::endl;
*/	ScalarConverter::convert(argv[1]);	

	return (0);
}
