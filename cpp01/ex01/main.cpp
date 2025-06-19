/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:49:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/19 11:57:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*z;
	int		zombiesNum;

	zombiesNum = 10;
	z = zombieHorde(zombiesNum, "Yery");
	for (int i = 0; i < zombiesNum; i++)
		z[i].announce();
	delete[] z;
	return (0);
}
