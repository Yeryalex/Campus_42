/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:16:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:50:01 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default_name"), gradeToSign(10), gradeToExecute(10), _signed(false) { }

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute):
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), _signed(false) {}

Form::Form(const Form &obj): name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute), _signed(obj._signed) {}	


Form	&Form::operator=(const Form &obj) {

	if (this != &obj)
		_signed = obj._signed;
	return (*this);
}

Form::~Form() {}

const std::string	Form::getName(void) const {
	
	return (name);
}

int	Form::getGradeToSign(void) const {
	
	return (gradeToSign);
}

int	Form::getGradeToExecute(void) const {
	
	return (gradeToExecute);
}

bool	Form::getSigned(void) const {
	
	return (_signed);
}

std::ostream	&operator<<(std::ostream &out, const Form &obj) {

	std::string nameForm = "name form: " + obj.getName();
	std::string requiredSign = "required grade to Sign: " + char(obj.getGradeToSign());
	std::string requiredExecute = "required grade to Execute: " + char(obj.getGradeToExecute());
	std::string status = "Form Status: " + char(obj.getSigned());

	out << "**********************************\n";
	out <<  nameForm << std::setw(34 - nameForm.length()) << "*" << std::endl;
	out <<  requiredSign << std::setw(34 - requiredSign.length()) << "*" << std::endl;
	out <<  requiredExecute << std::setw(34 - requiredExecute.length()) << "*" << std::endl;
	out <<  status << std::setw(34 - status.length()) << "*" << std::endl;
	out << "**********************************\n\n";
	return (out);
}

bool	Form::beSigned(Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() <= gradeToSign)
		return (_signed = true);
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {

	return ("Grade of bureaucrat is GREATER than the grade required by the form!");
}

const char* Form::GradeTooLowException::what() const throw() {

	return ("Grade of bureaucrat is LOWER than the grade required by the form!");
}
