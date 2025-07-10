/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:58 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/10 11:43:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits;
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		
		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static	Fixed		&min(Fixed &a, Fixed &b);
		static	const Fixed	&min(const Fixed &a, const Fixed &b);
		static	Fixed		&max(Fixed &a, Fixed &b);
		static	const Fixed &max(const Fixed &a, const Fixed &b);
		
		void	printfixed(void){
		
			std::cout << fixed_point << std::endl;
		};
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
