/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:38:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 20:48:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

int	main()
{
	AMateria *a = new Ice();

	std::cout << a->getType() << std::endl;
	return (0);
}
