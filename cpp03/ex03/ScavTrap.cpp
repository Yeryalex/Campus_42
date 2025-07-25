/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:36:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:37:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("defaultName")
{
	std::cout << "ScavTrap Default Constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string assignedName): ClapTrap(assignedName)
{
	std::cout << "ScavTrap Constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called\n";	
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper Mode\n";
}


void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!\n";
	}
	else
		std::cout << this->name <<  " has not enough energy or HP\n";
}
