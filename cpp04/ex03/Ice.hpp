/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:15:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 20:53:55 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"

class	Ice: public AMateria
{
	protected:
		std::string iceType;
	public:
		Ice();
		Ice(const Ice &obj);
		Ice	&operator=(const Ice &obj);
		~Ice();
		std::string	const	&getType() const;	
		AMateria	*clone() const;

};

#endif
