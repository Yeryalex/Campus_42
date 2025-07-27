/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:15:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:39:21 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &executor) const;	
		class FormNotSigned: public std::exception {
			
			const char *what() const throw();
		};
		class FormNotAbleToExecute: public std::exception {
		
			const char* what() const throw();
		};
}; 

#endif
