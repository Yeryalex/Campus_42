/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:53:09 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/29 14:47:08 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "messages.hpp"

void	ft_main_header()
{
	std::cout << GREEN << "/*--------------------------------------------------*/\n";
	std::cout << "/*                                                  */\n";
	std::cout << "/*              Personal Phonebook!                 */\n";
	std::cout << "/*                                                  */\n";
	std::cout << "/*  Please, select your option. (ADD, SEARCH, EXIT) */\n";
	std::cout << "/*                                                  */\n";
	std::cout << "/*--------------------------------------------------*/\n\n" << RESET;
}
