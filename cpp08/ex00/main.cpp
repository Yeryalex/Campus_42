/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 09:12:57 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/25 12:06:15 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	vectors(void) {
	
	std::vector<int>            numbers(10);
    std::vector<int>::iterator  it;
    std::vector<int>::iterator  iter;
    int a = 0;
    
    for (it = numbers.begin(); it != numbers.end();it++) {
        *it = a;
        a++;
    }
    try {
        for (int i = 0; i < (int)numbers.size(); i++) {
            
            iter = easyfind(numbers, i);
            std::cout << "Found: "<< *iter << std::endl;
        }
            iter = easyfind(numbers, 10);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void    lists(void) {
    
    std::list<int>            numbers(10);
    std::list<int>::iterator  it;
    std::list<int>::iterator  iter;
    int a = 0;
 
    for (it = numbers.begin(); it != numbers.end();it++) {
        *it = a;
        a++;
    }
    try {
        for (int i = 0; i < (int)numbers.size(); i++) {
            
            iter = easyfind(numbers, i);
            std::cout << "Found: "<< *iter << std::endl;
        }
            iter = easyfind(numbers, 10);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void    deque(void) {
    
    std::deque<int>            numbers(10);
    std::deque<int>::iterator  it;
    std::deque<int>::iterator  iter;
    int a = 0;
    
    for (it = numbers.begin(); it != numbers.end();it++) {
        *it = a;
        a++;
    }
    try {
        for (int i = 0; i < (int)numbers.size(); i++) {

            iter = easyfind(numbers, i);
            std::cout << "Found: "<< *iter << std::endl;
        }
            iter = easyfind(numbers, 10);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
	
	std::cout << "--- TESTS VECTORS ---\n";
	vectors();

	std::cout << "\n--- TESTS LISTS ---\n";
	lists();

	std::cout << "\n--- TESTS DEQUE ---\n";
	deque();

	return (0);
}
