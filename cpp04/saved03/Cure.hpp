/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:15:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 19:36:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class	Cure: public AMateria
{
	private:
		std::string cureType;
	public:
		Cure();
		Cure(const Cure &obj);
		Cure	&operator=(const Cure &obj);
		~Cure();
		AMateria	*clone() const;
		void	use(ICharacter &target);
};

#endif
