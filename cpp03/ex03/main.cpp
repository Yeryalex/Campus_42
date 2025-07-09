
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Yery");

	std::cout << a.ClapTrap::getName() << std::endl;
	std::cout << a.ScavTrap::getName() << std::endl;
/*	a.attack("other");
	a.beRepaired(2);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	a.takeDamage(100);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	a.takeDamage(4);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("no HP");
	a.beRepaired(100);
	std::cout <<  a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;

	a.highFiveGuys();

*/
	return (0);	
}
