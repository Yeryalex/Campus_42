/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 08:47:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/03 11:11:32 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cerr << "Please, enter a valid RPN string: \"num num + num\"\n", 1);
	if (!checkSyntax(argv[1]))
		return (std::cerr << "Error\n", 1);
	
	RPN::RPNotation(argv[1]);

	return (0);
}
