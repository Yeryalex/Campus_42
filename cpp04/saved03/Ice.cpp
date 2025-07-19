/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:21:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 19:35:53 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){ }

Ice::Ice(const Ice &obj): AMateria(obj) { }

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Ice::~Ice(){ return ;}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
