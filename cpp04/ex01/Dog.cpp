/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 18:24:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor Called\n";
	brain = new Brain();
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog Copy Constructor Called\n";
	brain = new Brain(*obj.brain);
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator Called\n";
	if (this != &obj)
	{
		Animal::operator=(obj);
		if (brain)
			delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dogs sound: \"Woof Woof\"\n";
}

void	Dog::dogThinkSomething(std::string idea, unsigned int n)
{
	brain->setIdeas(idea, n);
}

void	Dog::dogSayIdea(unsigned int n)
{
	std::cout << brain->getIdeas(n) << std::endl;
}
