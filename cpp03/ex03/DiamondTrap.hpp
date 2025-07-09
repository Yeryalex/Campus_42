

#ifndef	DIAMONDTRAP_HPP
#	define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(std::string assignedName);
};

#endif
