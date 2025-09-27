/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 08:53:35 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/27 12:23:15 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	listTest() {

	std::cout << "--- THIS IS THE SAME EXAMPLE BUT WITH LISTS AS REUESTED BY SUBJECT ---\n";

	std::list<int> lists;
	
	lists.push_back(5);
 	lists.push_back(17);
 	
	std::cout << lists.back() << std::endl;
	
	lists.pop_back();
	std::cout << lists.size() << std::endl;

	lists.push_back(3);
	lists.push_back(5);
	lists.push_back(737);
	lists.push_back(0);
	
	std::list<int>::iterator it = lists.begin();
	std::list<int>::iterator ite = lists.end();
	
	++it;
	--it;

 	std::cout << "values list: \n";
 	while (it != ite)
 	{
 		std::cout << *it << std::endl;
 		++it;
 	}
}

void	extraTests() {

	MutantStack<int> ms;

	MutantStack<int>::iterator it = ms.begin();
	MutantStack<int>::iterator ite = ms.end();

	for (; it != ite; it++)
    	std::cout << *it << std::endl;
	ms.push(1);	
	ms.push(2);	
	ms.push(3);	
	ms.push(4);	
	ms.push(5);	
	
	it = ms.begin();
	ite = ms.end();

	for (; it != ite; it++)
    	std::cout << *it << std::endl;
}

int main () {
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	
	std::cout << "values subject: \n";
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	
	std::stack<int> s(mstack);

	listTest();
	
	MutantStack<int> copy(mstack);
	MutantStack<int>::iterator its = copy.begin();
	MutantStack<int>::iterator ites = copy.end();

	std::cout << "copy values subject: \n";
	for (; its != ites; its++)
    	std::cout << *its << std::endl;
	
	std::cout << "--- EXTRA TESTS NO VALUES AND PUSH NEW VALUES ---\n";
	extraTests();
	return (0);
}
