/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:18:02 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/16 16:54:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{ 
//	std::cout << "Brain Constructor Called\n";
}
/*
Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Copy Constructor Called\n";
	this->operator=(obj);
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain Copy Assigned Operator Called\n";
	if (this != &obj)
		this->ideas = obj.ideas;
	return (*this);
}
*/
Brain::~Brain()
{
//	std::cout << "Brain Destructor Called\n";
}

void    Brain::setIdeas(std::string idea, unsigned int n)
{
	if (n < 100)
		ideas[n] = idea;
	else
		std::cout << "Idea number is out of range\n";
}

std::string Brain::getIdeas(unsigned int n) const
{
	std::string mainIdea = (n < 100) ?  ideas[n] : "Number Idea to retrieve is out of range";
	return (mainIdea);
}

