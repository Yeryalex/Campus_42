/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:03:30 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/26 20:30:50 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixed_number;
		static const int	fractional_bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &new_copy);
		Fixed	&operator=(const Fixed &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
