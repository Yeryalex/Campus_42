/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:49:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/20 13:03:36 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string	newLine;
	int			found = line.find(s1);
	int			initialPos = 0;

	while (found && found != -1)
	{
		newLine = newLine.append(line.substr(initialPos, found).append(s2));
		line = line.substr(found + s1.length());
		found = line.find(s1);
	}
	newLine.append(line);
	std::cout << newLine;
}
/*
int	main()
{
	std::string	line;
	std::string	s1;
	std::string s2;

	line = "Hola mundo, del uno al dos hay uno de diferencia\n";
	s1 = " ";
	s2 = "|";

	ft_replace(line, s1, s2);
	return (0);
}
*/

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please, enter valid arguments: <filename> String1 string2\n";
		return (0);
	}
	std::string	filenameNew = argv[1];

	filenameNew.append(".replace");
	std::ifstream	readFile(argv[1]);
	std::ofstream	newFile(filenameNew.c_str());

	std::string line;
	while (getline(readFile, line))
	{
		newFile << line;
		std::cout << line << std::endl;
	}
	newFile.close();
	readFile.close();
	return (0);
}
