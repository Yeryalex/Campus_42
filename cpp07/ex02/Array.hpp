/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:38:54 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/23 12:40:19 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define	ARRAY_HPP

#include <iostream>

template	<typename T>
class Array {

	private:
	T	*arr;
	public:
		Array() {
		   arr = new T(0);
		};
		void	print(void) { 
			std::cout << *arr << std::endl;
		}
};

#endif
