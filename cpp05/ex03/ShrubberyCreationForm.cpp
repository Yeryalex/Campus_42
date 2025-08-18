/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/11 15:29:54 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default_target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubbberyCreationForm", 145, 137), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm(obj) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::fileCreation(void) const {

	const std::string ASCII_TREE = 
"\n                      ,@@@@@@@,     88888\n"
"              ,,,.   ,@@@@@@/@@,  .oo8888o88.\n"
"           ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
"          ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
"          %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
"          %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
"          `&%\\ ` /%&'    |.|        \\ '|8'\n"
"              |o|        | |         | |\n"
"              |.|        | |         | |\n"
"           \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

	std::string result = this->_target + "_shrubbery";
	std::ofstream	_file;

	_file.open(result.c_str());
	if (!_file.is_open())
	{
		throw std::runtime_error("failed to open file\n");
	}
	_file << ASCII_TREE;
	_file.close();
}

const char*	ShrubberyCreationForm::FormNotSigned::what() const throw() {
	
	return ("your grade to sign it was lower that the required by the form!");
}

const char*	ShrubberyCreationForm::FormNotAbleToExecute::what() const throw() {
	
	return ("your grade to execute it was lower that the required by the form!");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	if (!this->getSigned())
		throw FormNotSigned();
 	if (this->getGradeToExecute() <  executor.getGrade())
		throw FormNotAbleToExecute();
	
	fileCreation();
}
