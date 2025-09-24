/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:38:54 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 09:44:00 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define	ARRAY_HPP

#include <iostream>
#include "Array.tpp"

template	<typename T>
class	Array {

	private:
		T			 *arr;
		unsigned int arr_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array	&operator=(const Array &obj);

		void	print(void) {
			std::cout << "Size is: " << arr_size << std::endl;
			for (unsigned int i = 0; i < arr_size; i++)
				std::cout << arr[i] << std::endl;
		}

		void	fillArr(void) {
		
			for (unsigned int i = 0; i < arr_size; i++)
				arr[i] = 'a';
	}
};

template	<typename T>
Array<T>::Array(): arr(NULL), arr_size(0) {}

template	<typename T>
Array<T>::Array(unsigned int n): arr(new T[n]), arr_size(n) {}

template	<typename T>
Array<T>::Array(const Array &obj): arr(NULL), arr_size(0) {

	*this = obj;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &obj) {

	if (this != &obj) {
		delete[] arr;
		this->arr_size = obj.arr_size;
		this->arr = new T[arr_size];

		for (unsigned int i = 0; i < arr_size; i++)
			this->arr[i] = obj.arr[i];
	}
	return (*this);
}

#endif
