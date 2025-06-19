/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:21:57 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/19 15:00:58 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) { return ; }

const std::string &Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
