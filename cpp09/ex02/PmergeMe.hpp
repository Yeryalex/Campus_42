/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:41:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/15 11:26:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PMERGEME_HPP
# define	PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <limits>
#include <ctime>
#include <algorithm>

#define MAX_INT std::numeric_limits<int>::max()

class	PmergeMe {

	private:
		std::vector<int>	vec;
	public:
		PmergeMe();
		PmergeMe(std::vector<int> input);
		PmergeMe(const PmergeMe &obj);
		PmergeMe	&operator=(const PmergeMe &obj);
		~PmergeMe();
		
		static int	fordJohnson(int argc, char **argv);
		
//		template	<typename T>
		void	sortAlgorithm();
		
		void	printVec() const;
		std::vector<int>	getVector() const;
};

int	validInteger(char *str);
std::vector<int>	generateJacobsthal(int pendsize);
std::vector<int>	generateInsertionOrder(int pendSize);

#endif
