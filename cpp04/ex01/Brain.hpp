/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:14:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 16:33:35 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#	define BRAIN_HPP

#include <iostream>

class	Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain();
	//	Brain(const Brain &obj);
	//	Brain	&operator=(const Brain &obj);
		~Brain();
		void		setIdeas(std::string idea, unsigned int n);
		std::string	getIdeas(unsigned int n) const;
};

#endif
