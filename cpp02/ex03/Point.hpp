/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:20:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/02 17:26:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
#	define POINT_HPP

#include <iostream>
#include <cmath>
#include"Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &obj);
		Point &operator=(const Point &obj);
		~Point();
		Fixed const	&getX(void) const;
		Fixed const &getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
