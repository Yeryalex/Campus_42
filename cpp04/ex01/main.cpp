/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:20:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 17:54:15 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << "\n***********************************************\n\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << meta->getType() << std::endl;
	meta->makeSound();

	std::cout << "\n***********************************************\n\n";
	
	std::cout << catWrong->getType() << " " << std::endl;
	std::cout << metaWrong->getType() << " " << std::endl;
	catWrong->makeSound();
	metaWrong->makeSound();
	
	std::cout << "\n***********************************************\n\n";
	
	delete	i;
	delete	j;
	delete	meta;
	delete	catWrong;
	delete	metaWrong;

	return (0);
}
