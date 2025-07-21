/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:05:13 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 17:36:50 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") { return ;}

Cure::Cure(const Cure &obj): AMateria(obj) { return ;}

Cure	&Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Cure::~Cure(){}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
