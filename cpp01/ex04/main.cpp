/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:49:22 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/20 14:28:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string	newLine;
	int			found = line.find(s1);
	int			initialPos = 0;

	if (s1.empty())
		return (newLine = line);
	while (found != -1)
	{
		newLine = newLine.append(line.substr(initialPos, found).append(s2));
		line = line.substr(found + s1.length());
		found = line.find(s1);
	}
	newLine.append(line);
	return (newLine);
}

std::string	fileExtension(std::string filename)
{
	int	existFileExt = filename.find(".");

	if (existFileExt != -1)
		filename = filename.substr(0, existFileExt);
	
	filename.append(".replace");
	return (filename);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please, enter valid arguments: <filename> String1 string2\n";
		return (0);
	}
	
	std::string	filenameNew = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	filenameNew = fileExtension(filenameNew);
	std::ifstream	readFile(argv[1]);
	std::ofstream	newFile(filenameNew.c_str());
	std::string line;
	
	while (getline(readFile, line))
		newFile << ft_replace(line, s1, s2) << std::endl;
	
	newFile.close();
	readFile.close();
	return (0);
}
