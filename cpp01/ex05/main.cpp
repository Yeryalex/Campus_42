/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:49:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/20 15:28:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please, enter valid argument: DEBUG, INFO, WARNING or ERROR\n";
		return (0);
	}
	Harl	harl;
	void	(Harl::*ptrComplain)(std::string) = &Harl::complain;
	(void)ptrComplain;	
	harl.complain(argv[1]);
	return (0);
}
