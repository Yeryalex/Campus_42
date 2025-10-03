/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:06:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/03 11:41:42 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	RPN_HPP
# define	RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

class	RPN {

	private:
		std::stack<int>	stack;
	public:
		RPN();
		RPN(const RPN &obj);
		RPN	&operator=(const RPN &obj);
		~RPN();
		static void	RPNotation(char *str);
		void	push(int number);
		int	applyOperation(char c);
};

int	checkSyntax(char *str);
#endif
