/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:42:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/04 09:22:28 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe &obj) {

	*this = obj;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

PmergeMe::~PmergeMe() { }

void	PmergeMe::sortAlgorithm(int argc, char	**argv) {
	
	PmergeMe	a;

	for (int i = 1; i < argc; i++) {

		if (validInteger(argv[i]))
		{
			int	number = atoi(argv[i]);
			a.vec.push_back(number);
		}
		else
		{
			std::cerr << "Error\n";
			return ;
		}
	}
	a.printVec();
}

void	PmergeMe::printVec() const {

	for (int i = 0; i < (int)this->vec.size(); i++)
		std::cout << this->vec[i] << " ";
	std::cout << std::endl;
}

int	validInteger(char *str) {

	int	plus = 0;
	std::stringstream	ss(str);
	std::string			value = ss.str();

	for (int i = 0; i < (int)value.length(); i++)
	{
		if (value[i] == '+')
			plus++;
		if (!isdigit(str[i]) && value[i] != '+')
			return (0);
	}
	if (plus > 1)
		return (0);
	if ((plus == 1 && value[0] != '+') || (plus == 1 && value.length() == 1))
		return (0);
	return (1);
}
