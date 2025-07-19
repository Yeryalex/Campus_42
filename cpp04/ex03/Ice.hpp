/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:02:29 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/19 16:30:34 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define	ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		~Ice();
		AMateria	*clone() const;
		void	use(ICharacter &target);
};

#endif
