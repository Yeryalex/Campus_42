/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define	AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <iomanip>
#include <string>
#include <sstream>

class Bureaucrat;

class AForm {

	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				_signed;
	public:
		AForm();
		AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm &obj);
		AForm	&operator=(const AForm &obj);
		virtual ~AForm();
		
		const std::string	getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				getSigned(void) const;
		bool				beSigned(Bureaucrat	&bureaucrat);
		virtual	void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw();
		};
}; 

std::ostream	&operator<<(std::ostream &out, const AForm &obj);

#endif
