/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:18:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:05:06 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default_Animal")
{ 
	std::cout << "Animal Constructor Called\n";
}

Animal::Animal(std::string typeName): type(typeName)
{ 
	std::cout << "Animal Constructor Called\n";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal Copy Constructor Called\n";
	this->operator=(obj);
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal Copy Assigned Operator Called\n";
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called\n";
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal is making a sound\n";
}
