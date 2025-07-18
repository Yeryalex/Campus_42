/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:39:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:43:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Yery");	

	std::cout << "\n*********************************************************************\n";
	std::cout << "FragTrap hit Points: " << a.getHitPoints() << std::endl;
	std::cout << "ScavTrap Energy Points: " << a.getEnergyPoints() << std::endl;
	std::cout << "FragTrap attack damage: " << a.getAttackDamage() << std::endl;

	a.attack("other");
	a.beRepaired(2);
	std::cout << "Hit Points after repairing " << a.getHitPoints() << std::endl;
	std::cout << "Energy Points after attacking and repairing: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "*********************************************************************\n\n";
	a.whoAmI();
	std::cout << "*********************************************************************\n\n";

	a.takeDamage(100);
	for (int i = 0; i < 50; i++)
		a.attack("Mike");
	
	std::cout << "*********************************************************************\n\n";
	return (0);
}
