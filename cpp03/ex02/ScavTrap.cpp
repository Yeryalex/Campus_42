
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("defaultName")
{
	std::cout << "ScavTrap Default Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string assignedName): ClapTrap(assignedName)
{
	std::cout << "ScavTrap Constructor called\n";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called\n";	
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper Mode\n";
}


void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		substractEnergyPoints(1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!\n";
	}
	else
		std::cout << this->getName() <<  " has not enough energy or HP\n";
}
