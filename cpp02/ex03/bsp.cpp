/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:20:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/09 15:11:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	triangleArea(Point p1, Point p2, Point p3)
{
	float a1 = p1.getX() * (p2.getY() - p3.getY());
	float a2 = p2.getX() * (p3.getY() - p1.getY());
	float a3 = p3.getX() * (p1.getY() - p2.getY());

	return ((a1 + a2 + a3) / 2.0);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float Area = triangleArea(a, b, c);
	float Area1 = triangleArea(point, b, c);
	float Area2 = triangleArea(a, point, c);
	float Area3 = triangleArea(a, b, point);
	return (Area == Area1 + Area2 + Area3);
}

/*
float	sign(Point p1, Point p2, Point p3)
{
	Fixed	_point_PB;
	Fixed	_point_BA;

	_point_PB = (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat());
	_point_BA = (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());

	return ((_point_PB - _point_BA).toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1 = sign(point, a, b);
	float	d2 = sign(point, b, c);
	float	d3 = sign(point, c, a);
	
	std::cout << "d1:" << d1 << " d2:"<< d2 << " d3:" << d3 << std::endl;

	bool	haveNegatives = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	havePositives = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return (!(haveNegatives && havePositives));
}*/
