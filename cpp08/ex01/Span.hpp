/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 08:49:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/26 12:30:08 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define	SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <ctime>

class Span {

	private:
		unsigned int N;
		std::vector<int> numbers;
		Span();
	public:
		Span(unsigned int n);
		Span(const Span &obj);
		Span	&operator=(const Span &obj);
		~Span();

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		longestSpan();
		int		shortestSpan();	
		void	fillContainer();
		
		void	popBack() {
			numbers.pop_back();
		};
		void	printSpan() {
			
			std::vector<int>::iterator it;

			for (it = numbers.begin(); it != numbers.end(); it++)
				std::cout << *it << std::endl;
	
	/*		for (int i = 0; i < (int)N; i++) {
				std::cout << numbers[i] << std::endl;
			}
	*/	}

		std::vector<int> &getContainer() {
		
			return (numbers);
		}	
	
		class	outBoundsException: public std::exception {
	
			public:
				const char	*what() const throw();
		};
		class impossibleComparisonException: public std::exception {
	
			public:
				const char	*what() const throw();
		};
		class	rangeException: public std::exception {
	
			public:
				const char	*what() const throw();
		};
};

#endif
