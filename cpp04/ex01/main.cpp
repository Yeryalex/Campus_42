/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:20:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 16:53:35 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	arr_size = 10;

int main()
{
	Animal	*animals[arr_size + 1];
	animals[arr_size] = NULL;
//	Animal	*test = new Dog();
	Dog	*f = new Dog();

	f->dogThinkSomething("hola", 100);
	f->dogSayIdea(100);

/*	Dog *d = dynamic_cast<Dog*>(test);

	d->dogThinkSomething("Bones", 0);
	d->dogSayIdea(0);
*/	for (int i = 0; i < arr_size / 2; i++){
		animals[i] = new Dog();
		std::cout << animals[i]->getType() << "| Number:" << i << std::endl;
	}
	for (int i = arr_size / 2; i < arr_size; i++){
		animals[i] = new Cat();
		std::cout << animals[i]->getType() << "| Number:" << i << std::endl;
	}
	
/*	Dog *a = dynamic_cast<Dog*>(animals[0]);
	if (!a)
		return (0);
	a->dogThinkSomething("Bones", 0);
	a->dogSayIdea(0);
*/	for (int i = 0; i < arr_size; i++){
		std::cout << animals[i]->getType() << " destroyed | Number:" << i << std::endl;
		delete	animals[i];
	}
	return (0);
}
