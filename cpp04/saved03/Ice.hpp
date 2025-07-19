/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:15:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 19:35:44 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"

class	Ice: public AMateria
{
	private:
		std::string iceType;
	public:
		Ice();
		Ice(const Ice &obj);
		Ice	&operator=(const Ice &obj);
		~Ice();
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
