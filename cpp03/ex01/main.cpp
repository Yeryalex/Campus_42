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
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Yery");

	a.attack("other");
	a.beRepaired(2);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	
	a.takeDamage(100);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	
	a.takeDamage(4);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	
	a.attack("no HP");
	a.beRepaired(100);
	
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;

	a.guardGate();
}
