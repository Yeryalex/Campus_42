/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:02:29 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/19 16:41:52 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define	AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
//		AMateria();
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		virtual ~AMateria();
		std::string const &getType()const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
