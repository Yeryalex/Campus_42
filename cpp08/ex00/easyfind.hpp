/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:34:44 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/25 12:06:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define	EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

class notFoundException: public std::exception {

	public:
		const char	*what() const throw() {
		
			return ("Value not found!");
		}
};

template	<typename T>
typename T::iterator	easyfind(T &container, int value) {
	
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), value);	
	if (it == container.end())
		throw notFoundException();
	return (it);
}

template	<typename T>
typename T::const_iterator	easyfind(const T &container, int value) {
	
	typename T::const_iterator it;
	
	it = std::find(container.begin(), container.end(), value);	
	if (it == container.end())
		throw notFoundException();
	return (it);
}

#endif
