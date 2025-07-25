/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define	FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <iomanip>
#include <string>
#include <sstream>

class Bureaucrat;

class Form {

	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				_signed;
	public:
		Form();
		Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
		Form(const Form &obj);
		Form	&operator=(const Form &obj);
		~Form();
		
		const std::string	getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				getSigned(void) const;
		
		bool	beSigned(Bureaucrat	&bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw();
		};
}; 

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif
