/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:51 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/09 13:34:24 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	fixed_point = integer << fractional_bits;
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called\n";
	fixed_point = roundf(floating * (1 << fractional_bits));
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
		this->fixed_point = obj.fixed_point;
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

int	Fixed::toInt(void) const
{
	return (int)(fixed_point >> fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return (float)(fixed_point / (float)(1 << fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
