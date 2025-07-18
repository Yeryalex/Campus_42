/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:36:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:37:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Diamond_default_clap_name"), name("Diamond_defaultName")
{
	std::cout << "DiamondTrap Default Constructor called\n";
	this->hitPoints = FragTrap::defaultHitPoints;
	this->energyPoints = ScavTrap::defaultEnergyPoints;
	this->attackDamage = FragTrap::defaultAttackDamage;
}

DiamondTrap::DiamondTrap(std::string assignedName): ClapTrap(assignedName + "_clap_name"), name(assignedName)
{
	std::cout << "DiamondTrap Constructor called\n";
	this->hitPoints = FragTrap::defaultHitPoints;
	this->energyPoints = ScavTrap::defaultEnergyPoints;
	this->attackDamage = FragTrap::defaultAttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj), name(obj.name)
{
	std::cout << "DiamondTrap copy constructor called\n";	
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap copy assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi! I am the DiamondTrap Class which name is " << name << ".\n";
	std::cout << "oh!! do not forget that ClapTrap base class name is " << ClapTrap::name << ".\n";
}

