/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:46:15 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:16:00 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	
	return ("Grade provided is too HIGH! (range 1 - 150).\n");
};

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade provided is too LOW! (range 1 - 150).\n");
};

Bureaucrat::Bureaucrat(): name("default_bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name), grade(obj.grade) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (out);
}

Bureaucrat	&Bureaucrat::operator++()
{
	if (grade == 1)
		throw GradeTooHighException();
	this->grade--;
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int)
{
	Bureaucrat	temp(*this);
	++(*this);
	return (temp);
}

Bureaucrat	&Bureaucrat::operator--()
{
	if (grade == 150)
		throw GradeTooLowException();
	this->grade++;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int) {
	
	Bureaucrat temp(*this);
	--(*this);
	return (temp);
}

const std::string &Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void) {
	
	++(*this);
}

void	Bureaucrat::decrementGrade(void) {
	
	--(*this);
}

void	Bureaucrat::signForm(Form &form) {

	try {
		form.beSigned(*this);
	}
	catch(const std::exception &e) {
		
		std::cout << this->getName() << " couldn't sign " << form.getName();
   		std::cout << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
}
