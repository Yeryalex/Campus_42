/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:51 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/28 15:06:47 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed()//: fixed_int(0), fixed_float(0)
{
	this->fixed_int = 0;
	this->fixed_float = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	this->fixed_int = integer << this->fractional_bits;
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called\n";
	this->fixed_float = roundf(floating * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	this->operator=(obj);
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->fixed_int = obj.fixed_int;
		this->fixed_float = obj.fixed_float;		
	}
	return (*this);
}


int	Fixed::toInt(void) const
{
	return (this->fixed_int >> this->fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return (this->fixed_float / (1 >> this->fractional_bits));
}
