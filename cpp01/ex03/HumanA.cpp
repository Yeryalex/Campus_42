/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:23:34 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/19 16:05:49 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &theWeapon): name(name), weapon(theWeapon){ return ;}

void	HumanA::attack(void)
{
	std::cout << this->name
			  << " attacks with their "
			  << this->weapon.getType()
			  << std::endl;
}
