
#include "ClapTrap.hpp"

int main()
{
	ClapTrap	test("Yery");

	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	for (int i = 0; i < 5 ; i++)
		test.attack("Carlos");	
	
	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	test.takeDamage(1);
	std::cout << "Hit Points: " << test.getHitPoints() << "\n";
	
	for (int i = 0; i < 5 ; i++)
		test.beRepaired(2);
	
	std::cout << "Hit Points: " << test.getHitPoints() << "\n";
	std::cout << "Energy Points: " << test.getEnergyPoints() << "\n";
	
	test.attack("other");
	test.beRepaired(2);
	
	return (0);
}
