#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(str Name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap();
    ScavTrap & operator = (ScavTrap const & src);
    virtual void attack(const str & target);
    void guardGate();
private:
};