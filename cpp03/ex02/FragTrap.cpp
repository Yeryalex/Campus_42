
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Default Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
}

FragTrap::FragTrap(std::string assignedName): ClapTrap(assignedName)
{
	std::cout << "FragTrap Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy Constructor called\n";
}

FragTrap	&FragTrap::operator=(const	FragTrap &obj)
{
	std::cout << "FragTrap copy  assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Want a hive Five? Go ahead and take it!\n";
}
