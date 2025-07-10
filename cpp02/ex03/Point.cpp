/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:20:12 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/10 12:59:31 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) { return ;}

Point::Point(const float a, const float b): x(a), y(b){ return ;}

Point::Point(const Point &obj): x(obj.x), y(obj.y) {	return ;}

Point &Point::operator=(const Point &obj)
{
	(void)obj;
	return (*this);
}

Point::~Point(){ }

Fixed	Point::getX(void) const
{
	return (x);
}

Fixed	Point::getY(void) const
{
	return (y);
}
