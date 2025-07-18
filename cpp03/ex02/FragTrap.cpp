/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:36:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:37:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("defaultName")
{
	std::cout << "FragTrap Default Constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string assignedName): ClapTrap(assignedName)
{
	std::cout << "FragTrap Constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called\n";	
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap wants a high Five!\n";
}


void	FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		energyPoints--;
		std::cout << "FragTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!\n";
	}
	else
		std::cout << this->name <<  " has not enough energy or HP\n";
}
