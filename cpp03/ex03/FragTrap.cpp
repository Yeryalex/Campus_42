/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:34:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:58:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrapDefaultName")
{
	std::cout << "FragTrap Default Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
}

FragTrap::FragTrap(std::string assignedName): ClapTrap(assignedName)
{
	std::cout << "FragTrap Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy Constructor called\n";
}

FragTrap	&FragTrap::operator=(const	FragTrap &obj)
{
	std::cout << "FragTrap copy  assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		substractEnergyPoints(1);
		std::cout << "FragTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!\n";
	}
	else
		std::cout << this->getName() <<  " has not enough energy or HP\n";
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Want a hive Five? Go ahead and take it!\n";
}
