/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:55 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 10:11:09 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cout << "Pass only one argument.\n", 1);

	ScalarConverter::convert(argv[1]);	
	
	return (0);
}
