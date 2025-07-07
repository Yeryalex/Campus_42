

#ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string assignedName);
		FragTrap(const FragTrap &obj);
		FragTrap	&operator=(const FragTrap &obj);
		~FragTrap();
		void	highFiveGuys(void);
	private:
};

#endif
