/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:05:13 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 18:43:52 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &materia): type(materia){}

AMateria::AMateria(const AMateria &obj)
{
	this->operator=(obj);
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

AMateria::~AMateria(){}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
