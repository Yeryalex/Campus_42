/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:05:13 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 17:37:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") { return ;}

Ice::Ice(const Ice &obj): AMateria(obj) { return ;}

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Ice::~Ice(){}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
