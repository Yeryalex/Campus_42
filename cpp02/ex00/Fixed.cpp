/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:05:25 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/26 20:55:58 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destuctor called\n";
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	this->operator=(object);
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->fixed_number = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixed_number = raw;
}
