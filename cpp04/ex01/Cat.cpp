/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:09:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor Called\n";
	brain = new Brain();
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat Copy Constructor Called\n";
	if (brain)
		delete brain;
	brain = new Brain(*obj.brain);
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator Called\n";
	if (this != &obj)
	{
		Animal::operator=(obj);
		if (brain)
			delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called\n";
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cats sound: \"Meoowww\"\n";
}

void	Cat::catThinkSomething(std::string idea, unsigned int n)
{
	brain->setIdeas(idea, n);
}

void	Cat::catSayIdea(unsigned int n)
{
	std::cout << brain->getIdeas(n) << std::endl;
}
