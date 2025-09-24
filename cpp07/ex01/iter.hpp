/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:10:30 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 13:06:51 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define	ITER_HPP

#include <iostream>

void	printerInt(int value){

	std::cout << value << " ";
}

template	<typename T>
void	print(const T &value) {
	std::cout << value << " ";
}

template	<typename T>
void	increment(T &a) {
	a++;
}

template	<typename T, typename function>
void	iter(T arr[], size_t arr_len, function f) { 
	for (size_t i = 0; i < arr_len; i++) {
		f(arr[i]);
	}
}

template	<typename T, typename function>
void	iter(const T arr[], size_t arr_len, function f) { 
	for (size_t i = 0; i < arr_len; i++) {
		f(arr[i]);
	}
}

#endif
