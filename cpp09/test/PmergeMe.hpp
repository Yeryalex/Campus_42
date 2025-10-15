/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:41:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/15 13:06:47 by yrodrigu         ###   ########.fr       */
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

template	<typename T>
class	PmergeMe {

	private:
		T	vec;
	public:
		PmergeMe();
		PmergeMe(T	input);
		PmergeMe(const PmergeMe &obj);
		PmergeMe	&operator=(const PmergeMe &obj);
		~PmergeMe();
		
		int		fordJohnson(int argc, char **argv);
		void	sortAlgorithm();
		void	printVec() const;
		T		getVector() const;
};

int	validInteger(char *str);
/*std::vector<int>	generateJacobsthal(int pendsize);
std::vector<int>	generateInsertionOrder(int pendSize);
*/


template	<typename T>
PmergeMe<T>::PmergeMe() { }

template	<typename T>
PmergeMe<T>::PmergeMe(T	input) : vec(input) { }

template	<typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &obj) {

	*this = obj;
}

template	<typename T>
PmergeMe<T>	&PmergeMe<T>::operator=(const PmergeMe &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

template	<typename T>
PmergeMe<T>::~PmergeMe() { }

template	<typename T>
void	PmergeMe<T>::printVec() const {
	for (int i = 0; i < (int)this->vec.size(); i++)
    	std::cout << this->vec[i] << " ";
	std::cout << std::endl;
}


template	<typename T>
int	PmergeMe<T>::fordJohnson(int argc, char **argv) {
	
	for (int i = 1; i < argc; i++) {

		if (validInteger(argv[i]))
		{
			long number = atol(argv[i]);
			if (number > MAX_INT)
				return (std::cout << "Error: Integer Value overflows.\n", 1);
			vec.push_back(number);
		}
		else
			return (std::cerr << "Error\n", 1);
	}
	this->printVec();
	this->sortAlgorithm();
//	a.printVec();

	return (0);

}

template	<typename T>
void    PmergeMe<T>::sortAlgorithm() {

    if (vec.size() <= 1)
		return ;
	
	std::vector<std::pair<int, int> > pairs;
	
	for (size_t i = 0; i + 1 < vec.size(); i += 2) {
		
		if (vec[i] > vec[i + 1])
			pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
		else
			pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
    }
	
	int unpaired = (vec.size() % 2 == 1) ? vec.back() : - 1;
	
	T    largerElements;
	
	for (size_t i = 0; i < pairs.size(); i++)
		largerElements.push_back(pairs[i].first);
	
	PmergeMe<T>	sortMain(largerElements);
	sortMain.sortAlgorithm();
	largerElements = sortMain.getVector();
	
	T mainChain = largerElements;
	T pend;
	for (size_t i = 0; i < pairs.size(); i++)
		pend.push_back(pairs[i].second);
	if (unpaired != -1)
		pend.push_back(unpaired);
    /*
    std::vector<int>    insertionOrder = generateInsertionOrder(pend.size());
    
    for (size_t i = 0; i < insertionOrder.size(); i++) {
        
        int pendIndex = insertionOrder[i];
        int element = pend[pendIndex];
        int searchEnd = std::min(static_cast<int>(mainChain.size()), pendIndex * 2 + 2);
        std::vector<int>::iterator pos;
        
        pos = std::lower_bound(mainChain.begin(), mainChain.begin() + searchEnd, element);
        mainChain.insert(pos, element);
    }
    vec = mainChain;*/
}
/*
std::vector<int>    generateJacobsthal(int pendsize) {

    std::vector<int>    jacob;

    if (pendsize <= 0)
        return (jacob);
    jacob.push_back(0);
    if (pendsize == 1)
        return (jacob);
    jacob.push_back(1);
    if (pendsize == 2)
        return (jacob);

    int next = 1;
    while (next < pendsize) {
    
        next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        if (next < pendsize)
            jacob.push_back(next);
        else
            break ;
    }
    return (jacob);
}

std::vector<int>    generateInsertionOrder(int pendSize) {
    
    std::vector<int> order;
    
    if (pendSize <= 0) return order;
    
    order.push_back(0);
    if (pendSize == 1) return order;

    std::vector<int> jacob = generateJacobsthal(pendSize + 1);

    for (size_t i = 1; i < jacob.size(); i++) {
        int start = jacob[i];
        int end = (i + 1 < jacob.size()) ? jacob[i + 1] : pendSize;
        
        for (int j = end - 1; j >= start; j--) {
            if (j < pendSize && j > 0) {
                order.push_back(j);
            }
        }
    }
    return order;
}
*/
template	<typename T>
T	PmergeMe<T>::getVector() const {

    return (this->vec);
}

#endif
