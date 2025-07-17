/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:15:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 18:43:29 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
class	MateriaSource: public IMateriaSource
{
	private:
		AMateria	*materiaSlot[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource();
		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif
