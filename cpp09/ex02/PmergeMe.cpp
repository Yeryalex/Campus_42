/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:42:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/15 16:06:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int>	generateJacobsthal(int pendsize) {

	std::vector<int>	jacob;

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

std::vector<int>	generateInsertionOrder(int pendSize) {
	
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
