/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:34:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 10:41:41 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual  public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string assignedName);
		FragTrap(const FragTrap &obj);
		FragTrap &operator=(const FragTrap &obj);
		~FragTrap();
		void	attack(const std::string &target);
		void	highFiveGuys(void);
		static const int defaultHitPoints = 100;
		static const int defaultAttackDamage = 30;
};

#endif
