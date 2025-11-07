#include "bigint.hpp"

bigint::bigint() {}

bigint::bigint(std::string number) {

/*	if (number.size() <= 9) {
		
		std::string temp;

		temp = std::string(number.rbegin(), number.rend());	
		digits.push_back(std::atoll(temp.c_str()));
	}
*/	
	std::string copy;

	copy = number;
	while (copy.size() > POWER) {

		std::string temp;

		temp = temp.append(std::string(copy.rbegin() + copy.size() - 9, copy.rend()));
		
		
		digits.push_back(std::atoll(temp.c_str()));
		copy.erase(copy.size() - 9);
	}
}

bigint::bigint(const bigint &obj) {

	this->operator=(obj);
}

bigint &bigint::operator=(const bigint &obj) {

	if (this != &obj) {
	
		this->digits = obj.digits;
	}
	return (*this);
}

bigint::~bigint() {}
