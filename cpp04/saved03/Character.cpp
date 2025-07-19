/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:21:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 19:21:33 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("default_name")
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(std::string name):name(name)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const Character &obj)
{
	this->operator=(obj);
}

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (slot[i])
			{
				delete slot[i];
				slot[i] = NULL;
			}
			if (obj.slot[i])
				slot[i] = obj.slot[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i])
			delete slot[i];
	}
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{	
		slot[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 4 && slot[idx])
		slot[idx]->use(target);
}
