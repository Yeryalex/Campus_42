/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:32:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 17:48:58 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat	&operator=(const WrongCat &obj);
		~WrongCat();
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
