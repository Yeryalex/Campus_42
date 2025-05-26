/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:17:31 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/26 18:07:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	for (int i = 1; i < argc; i++)
	{
		std::string phrase = argv[i];
		for (int j = 0; j < (int)phrase.length(); j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << "\n";
	return (0);
}
