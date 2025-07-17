/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:21:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 20:54:33 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): iceType("ice"){ return ; }

Ice::Ice(const Ice &obj)
{
	this->operator=(obj);
}

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->iceType = obj.iceType;
	return (*this);
}

Ice::~Ice(){ return ;}

AMateria	*Ice::clone() const
{
	AMateria	*a = new Ice();
	return (a);
}

std::string const &Ice::getType() const
{
	return (this->iceType);
}
