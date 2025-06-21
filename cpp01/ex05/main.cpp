/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:49:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/21 12:37:45 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	checkArguments(std::string message)
{
	std::string	messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (messages[i] == message)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2 || !checkArguments(argv[1]))
	{
		std::cout << "Please, enter valid argument: DEBUG, INFO, WARNING or ERROR\n";
		return (0);
	}	
	Harl harl;
	
	harl.complain(argv[1]);
	return (0);
}
