/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "cstdlib"
#include "ctime"

class RobotomyRequestForm: public AForm {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;
		void	drillNoise(Bureaucrat const &target) const;
		
		class FormNotSigned: public std::exception {
			
			const char *what() const throw();
		};
		class FormNotAbleToExecute: public std::exception {
			
			const char *what() const throw();
		};
}; 

#endif
