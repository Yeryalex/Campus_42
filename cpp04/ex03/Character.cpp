/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:49:17 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 20:03:02 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): index(0), name("default_character")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->unusedMateria[i] = NULL;
}

Character::Character(std::string newName): index(0), name(newName)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->unusedMateria[i] = NULL;
}

Character::Character(const Character &obj): index(obj.index), name(obj.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		if (i < obj.index && obj.unusedMateria[i])
			this->unusedMateria[i] = obj.unusedMateria[i]->clone();
		else
			this->unusedMateria[i] = NULL;
	}
}

Character &Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->index = obj.index;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : NULL;
		}
		for (int i = 0; i < 100; i++)
		{
			if (this->unusedMateria[i])
				delete this->unusedMateria[i];
			this->unusedMateria[i] = (i < obj.index && obj.unusedMateria[i])
				? obj.unusedMateria[i]->clone(): NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	
	for (int i = 0; i < 100; i++)
	{
		if (this->unusedMateria[i])
			delete this->unusedMateria[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const	&Character::getName() const 
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "It looks like the inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
	{
		std::cout << "You can not unequip something that does not exist\n";
		return;
	}
	if (index >= 100)
	{
		std::cout << "Too many unequipped items, can't store more.\n";
		return;
	}
	this->unusedMateria[index++] = this->inventory[idx];
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (inventory[idx] && idx >= 0 && idx < 4)
		this->inventory[idx]->use(target);
	else
		std::cout << "Character can not use something that does not exist\n";
}
