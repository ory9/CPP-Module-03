#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class  FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(str name);
    FragTrap(FragTrap const &src);
    ~FragTrap();
    FragTrap & operator = (FragTrap const & src);
    void highFivesGuys(void);
    void attack(const std::string& target);
private:
};