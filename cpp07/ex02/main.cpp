/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:59:19 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 11:43:15 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	Array<unsigned int> a;
	const Array<unsigned int>	test(5);

	a = test;
	int arr[1];

	arr[0] = test[0];

	std::cout << arr[0] << std::endl;
	//test.fillArr();
	try {
		std::cout << test[1] << std::endl;	
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
