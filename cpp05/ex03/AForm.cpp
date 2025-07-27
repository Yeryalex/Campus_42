/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:16:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:50:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("default_name"), gradeToSign(10), gradeToExecute(10), _signed(false) { }

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute):
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), _signed(false) {

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &obj): name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute), _signed(obj._signed) {}	


AForm	&AForm::operator=(const AForm &obj) {

	if (this != &obj)
		_signed = obj._signed;
	return (*this);
}

AForm::~AForm() {}

const std::string	AForm::getName(void) const {
	
	return (name);
}

int	AForm::getGradeToSign(void) const {
	
	return (gradeToSign);
}

int	AForm::getGradeToExecute(void) const {
	
	return (gradeToExecute);
}

bool	AForm::getSigned(void) const {
	
	return (_signed);
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj) {

	std::ostringstream gradeS;
	std::ostringstream gradeEx;
	std::ostringstream statusValue;

	gradeS << obj.getGradeToSign();
	gradeEx << obj.getGradeToExecute();
	statusValue << obj.getSigned();

	std::string nameAForm = "* name form: " + obj.getName();
	std::string requiredSign = "* required grade to Sign: " + gradeS.str();
	std::string requiredExecute = "* required grade to Execute: " + gradeEx.str();
	std::string status = "* Form Status: " + statusValue.str();

	out << "**********************************\n";
	out <<  nameAForm << std::setw(34 - nameAForm.length()) << "*" << std::endl;
	out <<  requiredSign << std::setw(34 - requiredSign.length()) << "*" << std::endl;
	out <<  requiredExecute << std::setw(34 - requiredExecute.length()) << "*" << std::endl;
	out <<  status << std::setw(34 - status.length()) << "*" << std::endl;
	out << "**********************************\n";
	return (out);
}

bool	AForm::beSigned(Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() <= gradeToSign)
		return (_signed = true);
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {

	return ("Grade is GREATER than the grade required by the form!");
}

const char* AForm::GradeTooLowException::what() const throw() {

	return ("Grade is LOWER than the grade required by the form!");
}
