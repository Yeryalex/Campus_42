/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:42:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 20:01:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define	CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	protected:
		int	index;
		AMateria	*inventory[4];
		std::string	name;
		AMateria	*unusedMateria[100];
	public:
		Character();
		Character(std::string name);
		Character(const Character &obj);
		Character	&operator=(const Character &obj);
		~Character();
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
