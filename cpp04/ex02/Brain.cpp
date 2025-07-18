/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/11 14:09:11 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Copy Constructor Called\n";
	this->operator=(obj);
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator Called\n";
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}

void	Brain::setIdeas(std::string idea, unsigned int n)
{
	if (n < 100)
		ideas[n] = idea;
	else
		std::cout << "The current animal cannot have more than 100 ideas!\n";
}

std::string	Brain::getIdeas(unsigned int n)
{
	std::string mainIdea =  (n < 100) ? ideas[n] : "The current animal have a brain for only 100 ideas, Try a different number!";
	return (mainIdea);
}
