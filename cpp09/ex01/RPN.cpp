/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:07:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/10/03 12:12:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(const RPN &obj) {

	*this = obj;
}

RPN	&RPN::operator=(const RPN &obj) {

	if (this != &obj) {
	
		this->stack = obj.stack;
	}
	return (*this);
}

RPN::~RPN() { }

void	RPN::push(int number) {

	stack.push(number);
}

int	isOperator(int c) {

	char	operators[] = {'+', '-', '*', '/'};
	
	for (int i = 0; i < 4; i++) {
	
		if (c == operators[i])
			return (1);
	}
	return (0);
}

int	checkSyntax(char *str) {

	std::istringstream	ss(str);
	std::string			value;
	int					num = 0;

	value = ss.str();	
	for (int i = 0; i < (int)value.length(); i++) {	
		if (!isdigit(str[i]) && !isOperator(str[i]) && value[i] != ' ')
			return (0);
	}

	while (std::getline(ss, value, ' '))
	{
		if (value.length() > 1)
		{
			std::cerr << "Only accept digits and operators splitted by spaces\n";
			return (0);
		}
		if (isdigit(value[0]))
			num++;
	}
	if (num < 2) {
	
		std::cerr << "You passed one or non digits\n";
		return (0);
	}
	return (1);
}

int	RPN::applyOperation (char c) {

	int op1, op2;

	op1 = this->stack.top();	
	this->stack.pop();
	op2 = this->stack.top();
	this->stack.pop();

	if (c == '+')
		return (op1 + op2);
	if (c == '-')
		return (op2 - op1);
	if (c == '*')
		return (op1 * op2);
	if (c == '/')
		return (op2 / op1);
	return (0);
}


void	RPN::RPNotation(char *str) {

	RPN					a;
	std::istringstream	ss(str);
	std::string			number;
	
	while (std::getline(ss, number, ' '))
	{
		if (std::isdigit(number[0]))
			a.stack.push(std::atoi(number.c_str()));
		else if (isOperator(number[0]) && a.stack.size() > 1)
			a.stack.push(a.applyOperation(number[0]));
	}
	if (a.stack.size() > 1)
	{
		RPN	temp;

		temp = a;
		std::cerr << "Values not used inside stack, probably missing an operand\n";
		while (temp.stack.size())
		{
			std::cerr << "| "  << temp.stack.top() << " |\n";
			temp.stack.pop();
		}
	}
	else if (a.stack.size() == 0)
		std::cerr << "Error: missing numbers" << std::endl;
	else
		std::cout << a.stack.top() << std::endl;		
}
