/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:43:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/05/26 18:13:31 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Dog {
	public:
		void bark();
};


void	Dog::bark(){
	std::cout << "Woof\n";
}

int main()
{
	Dog listen;

	listen.bark();
	return (0);
}
