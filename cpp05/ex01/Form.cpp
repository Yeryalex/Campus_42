/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:16:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 14:07:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default_name"), gradeToSign(10), gradeToExecute(10), _signed(false) { }

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute): 
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), _signed(false) { }

Form::Form(const Form &obj): 
	name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute), _signed(obj._signed) {}

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

	out << obj.getName() << "; " << "grade to signed and Exec. are: ";
	out << obj.getGradeToSign() << ", " << obj.getGradeToExecute();
	out << ". The current status of the form is: " << obj.getSigned() << ".\n";
	return (out);
}
