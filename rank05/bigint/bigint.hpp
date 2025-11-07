#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>

class bigint {

	private:
		std::vector<long long> digits;
		static const int BASE = 1000000000;
		static const int POWER = 9;
	public:
		bigint();
		bigint(std::string);
		bigint(const bigint &obj);
		bigint &operator=(const bigint &obj);
		~bigint();
		void	printdigits() {
		
			for(size_t i = 0; i < digits.size(); i++)
				std::cout << "DIGITS ARE: " << digits[i] << std::endl;
		}
};
