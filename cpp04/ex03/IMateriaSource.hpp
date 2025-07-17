/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:28:17 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/17 18:54:04 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	IMATERIASOURCE
# define	IMATERIASOURCE

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource(){}
		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
