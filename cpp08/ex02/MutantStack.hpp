/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 09:06:47 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/27 11:50:40 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define	MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class	MutantStack: public std::stack<T> {
	
	public:
		MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack	&operator=(const MutantStack &obj);
		~MutantStack();

		typedef	typename std::stack<T>::container_type::iterator iterator;
		typedef	typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin();
		iterator	end();
		const_iterator	begin() const;
		const_iterator	end() const;
};

template <typename T>
MutantStack<T>::MutantStack() { }

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj): std::stack<T>(obj) {}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &obj) {

	if (this != &obj) {
		std::stack<T>::operator=(obj);
	}
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() { }

template	<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template	<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return (std::stack<T>::c.end());
}

template	<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const{
	return (std::stack<T>::c.begin());
}

template	<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const{
	return (std::stack<T>::c.end());
}

#endif
