/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:15:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 14:37:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define	CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		std::string	name;
		AMateria *slot[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &obj);
		Character	&operator=(const Character &obj);
		virtual ~Character();

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
