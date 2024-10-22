#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
public:
    DiamondTrap();
    DiamondTrap(DiamondTrap const & src);
    DiamondTrap(str const & name);
    ~DiamondTrap();
    DiamondTrap & operator = (DiamondTrap const & src);
    void whoAmI();
private:
    str name;
};