/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:19:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/15 12:47:22 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {

	if (argc == 1)
		return (std::cout << "Please, enter numbers to be sorted.\n", 1);

	(void)argc, (void)argv;
	
	PmergeMe<std::vector<int> > a;
	
	a.fordJohnson(argc, argv);
	
	return (0);
}
