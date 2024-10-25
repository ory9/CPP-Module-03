#pragma once
#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap{
private:
    str             name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;
public:
    ClapTrap();
    ClapTrap(str name);
    ClapTrap(const ClapTrap& obj);
    ~ClapTrap();
    ClapTrap & operator = (const ClapTrap& cop);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void printData();
    void setData(unsigned int);
};
