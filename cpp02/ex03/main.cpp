/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:34 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/10 13:10:29 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>


int main() {
	
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(0.0f, 5.0f);
	
	Point testPoints[] = {
        Point(1.0f, 1.0f),
        Point(5.0f, 5.0f),
        Point(0.0f, 0.0f),
        Point(2.5f, 0.0f),
        Point(-1.0f, -1.0f),
        Point(1.0f, 3.0f),
        Point(2.0f, 2.0f),
        Point(2.32f, 1.02646f)
    };

    for (int i = 0; i < 8; ++i)
	{
		bool inside = bsp(a, b, c, testPoints[i]);
        std::cout << "Point (" << testPoints[i].getX().toFloat() << ", "
                  << testPoints[i].getY().toFloat() << ") is "
                  << (inside ? "inside" : "outside") << " the triangle." << std::endl;
    }
	
	return 0;
}
