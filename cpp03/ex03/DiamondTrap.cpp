
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string assignedName): ScavTrap(assignedName + "_clap_name")
{
	this->ScavTrap::setName(assignedName);
}
