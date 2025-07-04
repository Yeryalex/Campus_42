

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string assignedName): name(assignedName), hitPoints(10), 
	energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{

	std::cout << "Copy Constructor called\n";
	this->operator=(obj);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment Constructor called\n";
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	(void)target;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}
