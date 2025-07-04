

#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap	&operator=(const ClapTrap &obj);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amout);
		std::string	getName(void) const;
		unsigned int	getHitPoints(void) const;
};

#endif
