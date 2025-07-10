/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:44:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/10 17:16:08 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string assignedName): ClapTrap(assignedName + "_clap_name"), 
	name(assignedName)
{
	FragTrap tempFrag;
	ScavTrap tempScav;

	this->ClapTrap::setHitPoints(tempFrag.getHitPoints());
	this->ClapTrap::setEnergyPoints(tempScav.getEnergyPoints());
	this->ClapTrap::setAttackDamage(tempFrag.getAttackDamage());
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
