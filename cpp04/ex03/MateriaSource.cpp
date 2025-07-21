/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:06:25 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 17:44:33 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->learnedMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	this->operator=(obj);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learnedMateria[i])
				delete this->learnedMateria[i];
			this->learnedMateria[i] = obj.learnedMateria[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMateria[i])
			delete this->learnedMateria[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->learnedMateria[i])
		{
			this->learnedMateria[i] = materia;
			return ;
		}
	}
	std::cout << "Ouch!! It looks like you already learned enough materias\n";
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMateria[i] && this->learnedMateria[i]->getType() == type)
			return (this->learnedMateria[i]->clone());
	}
	std::cout << "Sorry, you need to learn Materias first! :(\n";
	return (0);
}
