/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default_target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm(target, 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm(obj) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
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

	std::ofstream	_file(this->getName().c_str());

	if (!_file.is_open())
	{
		throw std::runtime_error("failed to open file\n");
	}
	_file << ASCII_TREE;
	_file.close();
}

const char*	ShrubberyCreationForm::FormNotSigned::what() const throw() {
	
	return ("your form was not signed, sorry!");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	if (this->getSigned())
		fileCreation();
	else
		throw FormNotSigned();
}
