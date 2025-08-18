/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/11 15:25:29 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): AForm(obj) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
		AForm::operator=(obj);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const char*	PresidentialPardonForm::FormNotSigned::what() const throw() {
	
	return ("your grade to sign it was lower that the required by this form!");
}
const char*	PresidentialPardonForm::FormNotAbleToExecute::what() const throw() {
	
	return ("your grade to execute it was lower that the required by this form!");
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if (!this->getSigned())
		throw FormNotSigned();
   	if (this->getGradeToExecute() <  executor.getGrade())
		throw FormNotAbleToExecute();
	
	std::cout << "\033[33m";
	std::cout << this->_target << " has been pardon by Zaphod Beeblebrox\n";
	std::cout << "\033[0m";
}
