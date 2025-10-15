/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:19:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/15 13:54:49 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {

	if (argc == 1)
		return (std::cout << "Please, enter numbers to be sorted.\n", 1);

	(void)argc, (void)argv;
	
	PmergeMe<std::vector<int> > a;
	PmergeMe<std::deque<int> > d;
	
	a.fordJohnson(argc, argv);	
	d.fordJohnson(argc, argv);
	
	return (0);
}
