/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:09:47 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/23 11:48:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	
	int	arr[5] = {0, 1, 2, 3, 4};
	std::string strs[5] = {"Hola", "Mundo", "Programming", "Hello", "World"};

	std::cout << "--- TESTS ---\n";

	::iter(arr, 5, &printerInt); std::cout << "\n";
	::iter(arr, 5, increment<int>); std::cout << "\n";
	::iter(arr, 5, print<int>); std::cout << "\n";
	::iter(strs, 5, print<std::string>); std::cout << "\n";
	
	return (0);
}
