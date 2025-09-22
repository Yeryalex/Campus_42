/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:38:33 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 12:47:59 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void) {

    Base    *arrBase[] = {new A(), new B(), new C()};

    srand(time(0));
    int num = rand() % 3;

    return (arrBase[num]);
}

void    identify(Base *p) {

    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void    identify(Base &p) {

    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception &e) { }

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception &e) { }

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception &e) { }
}

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
