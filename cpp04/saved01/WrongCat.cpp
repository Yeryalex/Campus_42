/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:09:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): type("WrongCat")
{
	std::cout << "WrongCat Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat Copy Constructor Called\n";
	this->operator=(obj);
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignment operator Called\n";
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called\n";
}

std::string	WrongCat::getType() const
{
	return (type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCats sound: \"Meoowww\"\n";
}
