#include "bigint.hpp"

int main() {

	bigint a("10");
	bigint c("123400000000000000000000000000005678901234567890123456789");	

	c += a;

	std::cout << c << std::endl;
	return (0);
}
