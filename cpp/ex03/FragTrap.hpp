#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class  FragTrap : virtual public ClapTrap{
public:
    FragTrap();
    FragTrap(str name);
    FragTrap(FragTrap const &src);
    ~FragTrap();
    FragTrap & operator = (FragTrap const & src);
    void attack(const std::string& target);
    void highFivesGuys(void);
private:
};