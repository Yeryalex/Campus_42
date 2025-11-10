#include "bigint.hpp"

int main() {

	bigint a("99999999999999999999999999999999999999999999999991");
	bigint b("19999999999999999999999999999999999999999999999999");
	bigint c("19999999999999999999999999999999999999999999999999");
	


	std::cout << (a >= b) << std::endl;
	std::cout << (b >= a) << std::endl;
	std::cout << (b >= c) << std::endl;
	
	return (0);
}
