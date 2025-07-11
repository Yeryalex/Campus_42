/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:44:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 11:17:14 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap_Name_clap_name"), 
	name("DiamondTrapDefaultName")
{
	std::cout << "DiamondTrap Default Constructor Called\n";
	FragTrap tempFrag;
	ScavTrap tempScav;

	this->ClapTrap::setHitPoints(tempFrag.getHitPoints());
	this->ClapTrap::setEnergyPoints(tempScav.getEnergyPoints());
	this->ClapTrap::setAttackDamage(tempFrag.getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string assignedName): ClapTrap(assignedName + "_clap_name"), 
	name(assignedName)
{
	std::cout << "DiamondTrap Constructor Called\n";
	FragTrap tempFrag;
	ScavTrap tempScav;

	this->ClapTrap::setHitPoints(tempFrag.getHitPoints());
	this->ClapTrap::setEnergyPoints(tempScav.getEnergyPoints());
	this->ClapTrap::setAttackDamage(tempFrag.getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap Copy Constructor called\n"; 
	this->operator=(obj);
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap Copy assignment operator called\n"; 
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		this->name = obj.name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called\n";
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name from DiamondTrap is: " << this->name << std::endl;
	std::cout << "My name from ClapTrap is: " << ClapTrap::getName() << std::endl;
}
