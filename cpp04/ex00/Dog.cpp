/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:04:19 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): type("Dog")
{
	std::cout << "Dog Constructor Called\n";
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
}

std::string	Dog::getType() const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dogs sound: \"Woof Woof\"\n";
}
