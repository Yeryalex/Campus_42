/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:58 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/28 15:04:16 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_int;
		float				fixed_float;		
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
		void	printfInt(void) const{
			
			std::cout << this->fixed_int << std::endl;
		};
};

#endif
