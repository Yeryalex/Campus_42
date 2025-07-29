/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckString.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:10:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/29 16:10:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKSTRING_HPP
# define	CHECKSTRING_HPP

#include <iostream>
#include <string>

class CheckString {

	public:
		CheckString();
		CheckString(const CheckString &obj);
		CheckString &operator=(const CheckString &obj);
		~CheckString();
	 	static int	dotFound(const std::string &str);
	 	static int	floatFound(const std::string &str);
};

#endif
