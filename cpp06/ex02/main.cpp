/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:38:33 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 12:32:07 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifyClass.hpp"

int	main() {
	
	Base	*random = generate();
	Base	&refRandom = *random;

	std::cout << "--- Identify Type ---" << std::endl;
	
	std::cout << "Pointer:   ";
	identify(random);
	std::cout << "Reference: ";
	identify(refRandom);
	
	return (0);
}
