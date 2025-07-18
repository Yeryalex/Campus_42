/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:14:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/14 16:26:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#	define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string typeName);
		Animal(const Animal &obj);
		Animal	&operator=(const Animal &obj);
		virtual ~Animal() = 0;
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
