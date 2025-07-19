/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:38:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/19 16:32:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# 	define	ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(){}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
