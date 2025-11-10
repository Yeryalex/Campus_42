#include "bigint.hpp"

bigint::bigint() {}

bigint::bigint(std::string number) {
	
	if (number.empty()) {
		std::cout << "Error: empty string\n";
		return ;
	}
	while (number.size() > POWER) {
	
		std::string	temp;
		int	start_pos = number.size() - POWER;
		
		temp = number.substr(start_pos, POWER);
		digits.push_back(std::atoll(temp.c_str()));
		number.erase(start_pos, POWER);
	}

	if (!number.empty())
		digits.push_back(std::atoll(number.c_str()));
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

std::string	bigint::toString() const {

	if (this->digits.empty())
		return ("0");

	std::stringstream ss;

	ss << digits.back();
	for (size_t i = 0; i < digits.size(); i++) {
					
		ss << digits[digits.size() - 1 - i];
	}
	
	std::string result;

	ss >> result;

	return (result);
}

bigint	bigint::operator+(const bigint &obj) const {

	bigint result;

	long long carry = 0;

	size_t max = std::max(this->digits.size(), obj.digits.size());

	for (size_t i = 0; i < max || carry; ++i) {
	
		long long sum = carry;

		if (i < this->digits.size())
			sum += this->digits[i];

		if (i < obj.digits.size())
			sum += obj.digits[i];

		carry = sum / BASE;
		long long result_chunk = sum % BASE;

		result.digits.push_back(result_chunk);
	}
	return (result);
}

bigint	&bigint::operator+=(const bigint &obj) {

	bigint result = (*this) + obj;

	*this = result;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const bigint &obj) {

	os << obj.toString();

	return (os);
}
