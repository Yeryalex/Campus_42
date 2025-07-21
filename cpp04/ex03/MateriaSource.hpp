/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:03:15 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 17:38:45 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# 	define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	protected:
		AMateria	*learnedMateria[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource();
		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};

#endif
