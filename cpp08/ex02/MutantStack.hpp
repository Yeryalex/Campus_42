/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 09:06:47 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/27 09:22:31 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define	MUTANSTACK_HPP

#include <iostream>

template <typename T>
class	MutantStack {

	private:

	public:
		MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack	&operator=(const MutantStack &obj);
		~MutantStack();
};


template <typename T>
MutantStack<T>::MutantStack() { }

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) {

	*this = obj;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() { }

#endif
