/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:24:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 14:40:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#  define	BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class Base {

	public:
		virtual ~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif
