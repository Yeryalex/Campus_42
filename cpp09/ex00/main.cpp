/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:55:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/29 10:05:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
		return (std::cout << "Error: could not open file.\n", 1);

	readFile(argv[1]);

	return (0);
}
