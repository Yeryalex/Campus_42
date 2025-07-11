/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:30:00 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:31:35 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("defaultName"), hitPoints(10), 
	energyPoints(10), attackDamage(0)
{
	std::cout << "Default Constructor called\n";
}

ClapTrap::ClapTrap(std::string assignedName): name(assignedName), hitPoints(10), 
	energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{

	std::cout << "Copy Constructor called\n";
	this->operator=(obj);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment Constructor called\n";
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target;
		std::cout << ", causing " << attackDamage << " points of damage!\n";
	}
	else
		std::cout << name <<  " has not enough energy or HP\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	(hitPoints < amount) ? hitPoints = 0 : hitPoints -= amount;
	std::cout << "Ouch!!! " << name << " recieved a " << amount << " points attack,";
	std::cout << " resulting in " << hitPoints << " hit Points left\n";	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repairing adding " << amount << " to hit points\n";
	}
	else
		std::cout << "ClapTrap " << name << " has not enough energy to repair\n";
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}
