
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("YERY");	
	
	a.attack("other");
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
}
