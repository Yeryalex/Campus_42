/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:39:55 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 13:54:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA
#define	AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	materiaType;
	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(const AMateria &obj);
		AMateria	&operator=(const AMateria &obj);
		virtual ~AMateria();
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
