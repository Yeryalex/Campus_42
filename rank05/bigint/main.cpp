#include "bigint.hpp"

int main() {

	bigint a("1");
	bigint b("99999999999999999999999999999");
	bigint c("1");
	bigint d("2");
		
	std::cout << (b + a) << std::endl;
	std::cout << (b - a) << std::endl;
	std::cout << (b - bigint("9999999999")) << std::endl;
	
	return (0);
}
