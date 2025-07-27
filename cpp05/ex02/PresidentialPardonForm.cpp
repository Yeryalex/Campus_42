/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("default_target", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm(target, 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): AForm(obj) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const char*	PresidentialPardonForm::FormNotSigned::what() const throw() {
	
	return ("your grade to sign  PresidentialPardonForm was lower that the required by this form!");
}
const char*	PresidentialPardonForm::FormNotAbleToExecute::what() const throw() {
	
	return ("your grade to execute PresidentialPardonForm was lower that the required by this form!");
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if (!this->getSigned())
		throw FormNotSigned();
   	if (this->getGradeToExecute() <  executor.getGrade())
		throw FormNotAbleToExecute();
	
	std::cout << "\033[33m";
	std::cout << executor.getName() << " has been pardon by Zaphod Beeblebrox\n";
	std::cout << "\033[0m";
}
