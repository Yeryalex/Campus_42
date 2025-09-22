/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:24:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 12:14:42 by yrodrigu         ###   ########.fr       */
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

class Error: public Base {};

#endif
