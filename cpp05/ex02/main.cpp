/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:46:27 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/07/24 16:23:26 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	try
	{
		Bureaucrat a("Yery", 50);
		ShrubberyCreationForm f("form#001");
		std::cout << f;
		a.signForm(f);
	}
	catch(const std::exception &e) {
		
		std::cout << e.what();
	}
	return (0);
}
