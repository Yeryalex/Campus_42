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

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor Called\n";
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog Copy Constructor Called\n";
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator Called\n";
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Dogs sound: \"Woof Woof\"\n";
}
