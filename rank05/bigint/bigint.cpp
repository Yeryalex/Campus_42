#include "bigint.hpp"

bigint::bigint(): digits(0) {}

bigint::bigint(long long num) {

	std::stringstream ss;
	ss << num;

	*this =	bigint(ss.str());
}

bigint::bigint(std::string number) {
	
	if (number.empty() || !std::all_of(number.begin(), number.end(), ::isdigit)) {
		std::cout << "Error: not valid string\n";
		this->digits.push_back(0);
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

	if (this->digits.empty() || (this->digits.size() == 1 && this->digits[0] == 0))
		return ("0");

	std::stringstream ss;

	ss << digits.back();
	for (size_t i = 1; i < digits.size(); i++) {
					
		ss << std::setw(POWER) << std::setfill('0') <<  digits[digits.size() - 1 - i];
	}

	return (ss.str());
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

bigint	&bigint::operator-=(const bigint &obj) {

	bigint result = (*this) - obj;

	*this = result;
	return (*this);
}

bigint	bigint::operator-(const bigint &obj) const {

	if (*this < obj)
		return (bigint("0"));
	
	bigint result;
	
	long long borrow = 0;

	size_t max_size = this->digits.size();

	for (size_t i = 0; i < max_size; i++) {
	
		long long diff = this->digits[i] - borrow;

		if (i < obj.digits.size())
			diff -= obj.digits[i];
		if (diff < 0) {
		
			borrow = 1;
			diff += BASE;
		}
		else
			borrow = 0;

		result.digits.push_back(diff);
	}

	while (result.digits.size() > 1 && result.digits.back() == 0)
		result.digits.pop_back();

	return (result);
}

bool	bigint::operator==(const bigint &obj) const {

	return (this->digits == obj.digits);
}

bool	bigint::operator!=(const bigint &obj) const {

	return (this->digits != obj.digits);
}

bool	bigint::operator>(const bigint &obj) const {
	
	size_t	A = this->digits.size();
	size_t B = obj.digits.size();

	if (A > B)	
		return (true);
	if (A < B)
		return (false);
	if (A == B) {

		for (int i = A - 1; i >= 0; i--) {
		
			if (this->digits[i] != obj.digits[i])
				return (this->digits[i] > obj.digits[i]);
		}
	}
	return (false);
}

bool	bigint::operator>=(const bigint &obj) const {

	return !(*this < obj);
}

bool	bigint::operator<(const bigint &obj) const {

	return (obj > *this);
}

bool	bigint::operator<=(const bigint &obj) const{

	return !(*this > obj);
}

bigint	&bigint::operator++() {

	return (*this += bigint(1));
}

bigint	bigint::operator++(int) {

	bigint temp(*this);
	++(*this);
	return (temp);
}

bigint	&bigint::operator--() {

	return (*this -= bigint(1));
}

bigint	bigint::operator--(int) {

	bigint temp(*this);
	--(*this);
	return (temp);
}

bigint	bigint::operator<<(int num) const {

	return (bigint(this->toString() + std::string(num, '0')));	
}

bigint	bigint::operator>>(int num) const {

	std::string	str = this->toString();
	
	if (str.size() <= (size_t)num)
		return (bigint("0"));
	return (bigint(str.erase(str.size() - num, num)));	
}

bigint	&bigint::operator<<=(int num) {

	bigint	temp(*this << num);
	*this = temp;

	return (*this);
}

bigint	&bigint::operator>>=(int num) {

	bigint	temp(*this >> num);

	*this = temp;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const bigint &obj) {

	os << obj.toString();

	return (os);
}
