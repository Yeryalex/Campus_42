/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/15 20:42:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): type("Cat")
{
//	std::cout << "Cat Constructor Called\n";
	this->brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat Copy Constructor Called\n";
	this->operator=(obj);
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator Called\n";
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
//	std::cout << "Cat Destructor Called\n";
	delete this->brain;
}

std::string	Cat::getType() const
{
	return (type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cats sound: \"Meoowww\"\n";
}
