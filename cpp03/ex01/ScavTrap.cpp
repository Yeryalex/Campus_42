
#include "ScavTrap.hpp"
/*
ScavTrap::ScavTrap(): name("DefaultName"), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ScavTrap Default Constructor called\n";
}
*/
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
/*
ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoinst = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}*/

void	guardGate()
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
