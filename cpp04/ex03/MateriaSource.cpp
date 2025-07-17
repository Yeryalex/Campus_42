/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:21:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 19:26:10 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materiaSlot[i] = NULL;
}
/*
MateriaSource::MateriaSource(const MateriaSource &obj)
{
	this->operator=(obj);
}
*/
MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		materiaSlot[i] = NULL;
	*this = obj;
}


MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materiaSlot[i])
			{
				delete materiaSlot[i];
				materiaSlot[i] = NULL;
			}
			if (obj.materiaSlot[i])
				materiaSlot[i] = obj.materiaSlot[i]->clone();
		}
	}
   	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSlot[i])
			delete materiaSlot[i];
	}	
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSlot[i] == NULL)
		{
			materiaSlot[i] = materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSlot[i] && materiaSlot[i]->getType() == type)
			return (materiaSlot[i]->clone());
	}
	return (NULL);
}
