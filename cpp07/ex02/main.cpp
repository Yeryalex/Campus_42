/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:59:19 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 09:54:38 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	Array<unsigned int> a;
	Array<unsigned int>	test(5);
	Array<int> c(-1);

	a.print();
	a = test;

	test.fillArr();
	test.print();

	Array<unsigned int> b = test;	
	a.print();
	b.print();
	
	Array<unsigned int> x(test);

	x.print();

	return (0);
}
