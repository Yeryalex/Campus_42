/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/16 15:49:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define	SCALARCONVERTER_HPP

#include "CheckString.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>


class ScalarConverter {

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
	
		static void	convert(const std::string &str);
};

#endif
