/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 08:49:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/26 12:37:31 by yrodrigu         ###   ########.fr       */
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

		void				addNumber(int num);
		void				addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int					longestSpan();
		int					shortestSpan();	
		void				fillContainer();
		void				popBack();
		void				printSpan();
		std::vector<int>	 &getContainer();

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
