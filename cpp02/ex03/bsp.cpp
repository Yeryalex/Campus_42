/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:20:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/02 17:52:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point p1, Point p2, Point p3)
{
	Fixed	_point_PB;
	Fixed	_point_BA;

	_point_PB = (p1.getX() - p3.getX()) * (p2.getY() - p3.getY());
	_point_BA = (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());

	return ((_point_PB - _point_BA).toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1 = sign(point, a, b);
	float	d2 = sign(point, b, c);
	float	d3 = sign(point, c, a);

	bool	haveNegatives = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	havePositives = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return (!(haveNegatives && havePositives));
}
