/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:38:54 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/24 12:31:17 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define	ARRAY_HPP

#include <iostream>
#include <exception>

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
		~Array();

		unsigned int	size(void) const;
		T				&operator[](unsigned int index);
		const	T		&operator[](unsigned int index) const;
	
		void			fillArr(unsigned int value) {
			for (unsigned int i = 0; i < arr_size; i++)
				arr[i] = value;
		}
		
		void			printArray(void) {
			for (unsigned int i = 0; i < arr_size; i++)
				std::cout << arr[i] << std::endl;
		}

		class outBoundsException: public std::exception {
			public:
				const char	*what() const throw();
		};
};

# include "Array.tpp"

#endif
