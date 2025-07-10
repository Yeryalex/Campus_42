/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:33:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/10 17:36:55 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Yery");

	std::cout << "*********************************************************************\n";
	std::cout << "FragTrap hit Points: " << a.getHitPoints() << std::endl;
	std::cout << "ScavTrap Energy Points: " << a.getEnergyPoints() << std::endl;
	std::cout << "FragTrap attack damage: " << a.getAttackDamage() << std::endl;
	a.attack("other");
	a.whoAmI();
	std::cout << "*********************************************************************\n";

	return (0);	
}
