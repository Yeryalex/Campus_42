#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>

class bigint {

	private:
		std::vector<long long>	digits;
		static const int BASE = 1000000000;
		static const int POWER = 9;
	public:
		bigint();
		bigint(std::string);
		bigint(const bigint &obj);
		bigint &operator=(const bigint &obj);
		~bigint();
		
		std::string	toString() const;
		bigint	operator+(const bigint &obj) const;
		bigint	&operator+=(const bigint &obj);
		bool	operator==(const bigint &obj) const;
		bool	operator!=(const bigint &obj) const;
		bool	operator>(const bigint &obj) const;
		bool	operator>=(const bigint &obj) const;
//		bool	operator<(const bigint &obj) const;
//		bool	operator<=(const bigint &obj) const;

};

std::ostream	&operator<<(std::ostream &os, const bigint &obj);
