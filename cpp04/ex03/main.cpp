/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:38:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/21 20:11:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << "*********************************************************\n"; 
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "*********************************************************\n"; 
	
	delete bob;
	delete me;
	delete src;

 /*********************************************************/ 
  	AMateria *temp1 = new Ice();
    AMateria *temp2 = new Ice();
    AMateria *temp3 = new Ice();
    AMateria *temp4 = new Ice();
    AMateria *temp5 = new Ice();
    ICharacter *ch = new Character("Yery");
    ICharacter *bobby = new Character("Bob");
    ICharacter *bob2 = bobby;
    
    AMateria *test1 = temp1;

    std::cout << test1->getType() << std::endl;
    std::cout << ch->getName() << std::endl;
    
    ch->equip(test1);
    ch->equip(temp2);
    ch->equip(temp3);
    ch->equip(temp4);
    ch->equip(temp5);
    
    ch->use(0, *bob2);
    ch->use(1, *bob2);
    ch->use(2, *bob2);
    ch->use(3, *bob2);
    ch->use(4, *bob2);
    
    ch->unequip(0);
    ch->unequip(1);
    ch->unequip(2);
    ch->unequip(3);
    ch->unequip(4);

	std::cout << "*********************************************************\n"; 
    
    delete ch;
    delete bob2; 
	delete temp5;
	return 0;
}
