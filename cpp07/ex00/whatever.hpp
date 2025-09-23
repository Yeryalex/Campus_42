/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:03:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/23 09:06:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define	WHATEVER_HPP

#include <iostream>

template	<typename T>
void	swap(T &a, T &b) {
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template	<typename T>
T	min(T a, T b) {

	if (a == b)
		return (b);
	return ((a < b) ? a : b);
}

template	<typename T>
T	max(T a, T b) {

	if (a == b)
		return (b);
	return ((a < b) ? b : a);
}

template	<typename T>
void	printer(T value) {

	std::cout << value;
}

#endif
