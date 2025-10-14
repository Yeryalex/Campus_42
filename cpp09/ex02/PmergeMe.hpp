/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:41:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/14 13:03:52 by yrodrigu         ###   ########.fr       */
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

#define MAX_INT std::numeric_limits<int>::max()

class	PmergeMe {

	private:
		std::vector<int>	vec;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &obj);
		PmergeMe	&operator=(const PmergeMe &obj);
		~PmergeMe();
		
		static int	fordJohnson(int argc, char **argv);
		void	sortAlgorithm();
		void	printVec() const;
		std::vector<int>	getVector() const;
};

int	validInteger(char *str);

#endif
