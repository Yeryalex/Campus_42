/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/08/11 15:23:35 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "cstdlib"
#include "ctime"

class RobotomyRequestForm: public AForm {

	private:
		std::string		_target;
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &bureaucrat) const;
		void	drillNoise(void) const;
		
		class FormNotSigned: public std::exception {
			
			const char *what() const throw();
		};
		class FormNotAbleToExecute: public std::exception {
			
			const char *what() const throw();
		};
}; 

#endif
