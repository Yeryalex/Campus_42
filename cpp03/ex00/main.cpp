/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:31:39 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:31:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	test("Yery");

	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	for (int i = 0; i < 5 ; i++)
		test.attack("Carlos");	
	
	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	test.takeDamage(1);
	std::cout << "Hit Points: " << test.getHitPoints() << "\n";
	
	for (int i = 0; i < 5 ; i++)
		test.beRepaired(2);
	
	std::cout << "Hit Points: " << test.getHitPoints() << "\n";
	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	test.attack("other");
	test.beRepaired(2);
	
	return (0);
}
