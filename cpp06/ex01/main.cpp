/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:20:57 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 09:56:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

	Data filledData = {28, "Yery"};
//////////////////////////////////////////////////////////////////
	uintptr_t	raw = Serializer::serialize(&filledData);

	std::cout << "--- uint Value and Memory address ---\n" << std::endl;
	std::cout << "unsigned int:     ";
	std::cout << raw << std::endl;
/////////////////////////////////////////////////////////////////
	Data	*restored = Serializer::deserialize(raw);
	
	std::cout << "Data serialize:   " << &filledData << std::endl;	
	std::cout << "Data deserialize: " << restored << std::endl;

/////////////////////////////////////////////////////////////////
	std::cout << std::endl << "--- Values after deserialize ---\n" << std::endl;
	std::cout << "X:    " << restored->x << std::endl;
	std::cout << "Name: " << restored->name << std::endl;

	return (0);
}
