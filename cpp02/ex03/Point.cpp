/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:20:12 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/09 15:10:08 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) { return ;}

Point::Point(const Fixed a, const Fixed b): x(a), y(b){ return ;}

Point::Point(const Point &obj)
{
	this->operator=(obj);
}

Point &Point::operator=(const Point &obj)
{
	(void)obj;
	return (*this);
}

Point::~Point(){ }

float	Point::getX(void) const
{
	return ((float)x.getRawBits());
}

float	Point::getY(void) const
{
	return ((float)y.getRawBits());
}
