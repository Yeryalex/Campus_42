#include "bigint.hpp"

int main() {

	bigint c("1");
	bigint a(1);

	--c;
	c--;
	std::cout << c << std::endl;
	--a;
	a--;
	std::cout << a << std::endl;
	
	return (0);
}
