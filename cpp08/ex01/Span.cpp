/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 08:51:47 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/26 12:31:32 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() { }

Span::Span(unsigned int n): N(n){ }

Span::Span(const Span &obj) {

	*this = obj;
}

Span	&Span::operator=(const Span &obj) {

	if (this != &obj)
	{
		this->N = obj.N;
	}
	return (*this);
}

Span::~Span() { }

void	Span::addNumber(int num) {
	if (numbers.size() < N)
		numbers.push_back(num);
	else
		throw outBoundsException();
}


void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if (distance(begin, end) > N)
		throw rangeException();
	numbers.insert(numbers.begin(), begin, end);
}

int	Span::longestSpan() {

	if (numbers.empty() || numbers.size() == 1)
		throw impossibleComparisonException();
	
	sort(numbers.begin(), numbers.end());
	
	return (*(numbers.end() - 1) - *numbers.begin());
}

int	Span::shortestSpan() {

	if (numbers.empty() || numbers.size() == 1)
		throw impossibleComparisonException();
	int	diff = abs(*numbers.begin() - *(numbers.begin() + 1));
	
	for (int i = 0; i < (int)numbers.size(); i++) {
	
		for (int j = i + 1; j < (int)numbers.size(); j++) {
		
			if (abs(numbers[i] - numbers[j]) < diff) {
				diff = abs(numbers[i] - numbers[j]);
			}
		}
	}
	return (diff);
}

void	Span::fillContainer() {

	srand(time(0));
	
	for (int i = 0; i < (int)N; i++) {
		numbers.push_back(rand() % 1001);
	}
}

const char	*Span::outBoundsException::what() const throw() {

	return ("Exception: Container is full, do not admmit more numbers.");
}

const char	*Span::impossibleComparisonException::what() const throw() {
	
	return ("Exception: Impossible comparison, container with one or non numbers.");
}

const char	*Span::rangeException::what() const throw() {
	
	return ("Exception: Not enough space to insert multiple values.");
}
