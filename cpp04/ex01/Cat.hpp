/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:32:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 17:21:09 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal, public Brain
{
	private:
		Brain	*brain;
	protected:
		std::string	type;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat();
		std::string	getType(void) const;
		void		makeSound(void) const;
		void		catThinkSomething(std::string idea, unsigned int n);
		void		catSayIdea(unsigned int n) const;
};

#endif
