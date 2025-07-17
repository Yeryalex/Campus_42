/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:04:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 20:52:33 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): materiaType("materiaType_Defeault") { return ; }

AMateria::AMateria(std::string const &type): materiaType(type) { return ; }

AMateria::AMateria(const AMateria &obj)
{
	this->operator=(obj);
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->materiaType = obj.materiaType;
	return (*this);
}

AMateria::~AMateria(){ return ; }

std::string const	&AMateria::getType() const
{
	return (materiaType);
}
