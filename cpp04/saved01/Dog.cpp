/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 19:36:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): type("Dog")
{
	std::cout << "Dog Constructor Called\n";
	this->brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Copy Constructor Called\n";
	this->operator=(obj);
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator Called\n";
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
	delete this->brain;
}

std::string	Dog::getType() const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dogs sound: \"Woof Woof\"\n";
}

void	Dog::dogThinkSomething(std::string idea, unsigned int n)
{
	this->brain->setIdeas(idea, n);
}

void	Dog::dogSayIdea(unsigned int n)
{
	std::cout << this->brain->getIdeas(n) << std::endl;
}
