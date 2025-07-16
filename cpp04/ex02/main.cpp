/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:20:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 18:18:42 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	size = 10;

int main()
{
	Animal	*animals[size + 1];
	animals[size] = NULL;

	std::cout << "*********************************************************\n";
	
	for (int i = 0; i < size / 2; i++){
		animals[i] = new Dog();
		std::cout << animals[i]->getType() << " | Number: " << i << std::endl;
	}
	for (int i = size / 2; i < size; i++){
		animals[i] = new Cat();
		std::cout << animals[i]->getType() << " | Number: " << i << std::endl;
	}
	std::cout << "*********************************************************\n";
	
	Dog *doggy;
	doggy = dynamic_cast<Dog*>(animals[0]);
	if (!doggy)
		return (std::cout << "Error casting Dog\n", 0);
	Cat	*kitty;
	kitty = dynamic_cast<Cat*>(animals[5]);
	if (!kitty)
		return (std::cout << "Error casting Kitty\n", 0);
	
	for (int i = 0; i < 101; i++){
		doggy->dogThinkSomething("Dogs only think about Bones", i);
		doggy->dogSayIdea(i);
	}
	for (int i = 0; i < 101; i++){
		kitty->catThinkSomething("Cats only think about Milk", i);
		kitty->catSayIdea(i);
	}
	
	std::cout << "*********************************************************\n";

	for (int i = 0; i < size; i++){
		std::cout << animals[i]->getType() << " | Number: " << i << " deleted\n";
		delete animals[i];
	}
	std::cout << "*********************************************************\n";	
	
	return (0);
}
