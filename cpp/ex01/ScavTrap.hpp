#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(str Name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap();
    ScavTrap & operator = (ScavTrap const & src);
    void attack(const std::string& target);
    void guardGate();
private:
};
