/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:32:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:04:29 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal
{
	protected:
		std::string	type;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog	&operator=(const Dog &obj);
		~Dog();
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
