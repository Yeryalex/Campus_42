/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/11 15:30:13 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 72, 45), _target(target) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(obj) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const char*	RobotomyRequestForm::FormNotSigned::what() const throw() {
	
	return ("your grade to sign it was lower that the required by the form!");
}

const char*	RobotomyRequestForm::FormNotAbleToExecute::what() const throw() {
	
	return ("your grade to execute it was lower that the required by the form!");
}

void	RobotomyRequestForm::drillNoise(void) const {

	const std::string drillingNoises = 
	"\nZZZZRRRRKKK! CHK-CHK-BZZZT! \n"
	"WHIIIRRRrrr... CLANK! \n"
	"VVT-VVT-VVT... ZZZZOOOOMMM! \n"
	"*robot voice* 'DRILLING IN PROGRESS' \n"
	"BZZZZT! CHK-CHK-CHK! GRRRRRND!\n";	

	srand(time(0));
	int random = rand() % 2;
	if (random == 1)
	{
		std::cout << "\033[033m";
		std::cout << drillingNoises << "\n" << "\033[0m";
		std::cout << "\033[32m" << this->_target << " has been robotomized succesfully...\n\n";
		std::cout << "\033[0m";
	}
	else
		std::cout << "\n\033[31m" << this->_target << " couldn't be robotomized\n\n" << "\033[0m";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {

	if (!this->getSigned())
		throw FormNotSigned();
	if (this->getGradeToExecute() <  executor.getGrade())
		throw FormNotAbleToExecute();
	
	drillNoise();
}
