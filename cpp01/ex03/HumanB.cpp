/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:23:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/19 15:53:36 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name){ return ;}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon =	&new_weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name
			  << " attacks with their "
			  << this->weapon->getType()
			  << std::endl;
}
