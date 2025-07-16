/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:32:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 18:22:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal, public Brain
{
	private:
		Brain	*brain;
	protected:
		std::string	type;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog	&operator=(const Dog &obj);
		~Dog();
		std::string	getType(void) const;
		void		makeSound(void) const;
		void		dogThinkSomething(std::string idea, unsigned int n);
		void		dogSayIdea(unsigned int n);
};

#endif
