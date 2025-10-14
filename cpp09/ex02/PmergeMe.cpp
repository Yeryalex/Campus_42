/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:42:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/14 13:08:55 by yrodrigu         ###   ########.fr       */
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

int	PmergeMe::fordJohnson(int argc, char **argv) {
	
	PmergeMe	a;

	for (int i = 1; i < argc; i++) {

		if (validInteger(argv[i]))
		{
			long number = atol(argv[i]);
			if (number > MAX_INT)
				return (std::cout << "Error: Integer Value overflows.\n", 1);
			a.vec.push_back(number);
		}
		else
			return (std::cerr << "Error\n", 1);
	}
	a.printVec();
	a.sortAlgorithm();
	return (0);
}

void	PmergeMe::sortAlgorithm() {

	if (vec.size() <= 1)
		return ;
	
	std::vector<std::pair<int, int> > pairs;

	for (size_t i = 0; i + 1 < vec.size(); i += 2) {
	
		if (vec[i] > vec[i + 1])
			pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
		else
			pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
	}

//	for (size_t  i = 0; i < pairs.size(); i++)
//		std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ")\n";
	
//	int	unpaired = (vec.size() % 2 == 1) ? vec.back() : -1;

	std::vector<int>	largerElements;

	for (size_t i = 0; i < pairs.size(); i++)
		largerElements.push_back(pairs[i].first);
	
//	for (size_t  i = 0; i < largerElements.size(); i++)
//		std::cout << "(" << largerElements[i] << ")\n";

	PmergeMe	sortMain;

	for (size_t i = 0; i < largerElements.size(); i++)
		sortMain.vec.push_back(largerElements[i]);
	
//	for (size_t i = 0; i < sortMain.vec.size(); i++)
//		std::cout << sortMain.vec[i] << std::endl;

	sortMain.sortAlgorithm();
	for (size_t i = 0; i < sortMain.vec.size(); i++)
		std::cout << sortMain.vec[i] << std::endl;

//	largerElements = sortMain.getVector();
}

std::vector<int>	PmergeMe::getVector() const {

	return (this->vec);
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
