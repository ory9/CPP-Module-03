#pragma once
#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap{
protected:
    str      name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;
public:
    ClapTrap();
    ClapTrap(str name);
    ClapTrap(unsigned int data);
    ClapTrap(const ClapTrap& obj);
    ~ClapTrap();
    ClapTrap & operator = (const ClapTrap& cop);
    void setHitPoints(unsigned int data);
    void setEnergyPoints(unsigned int data);
    void setAttackDamage(unsigned int data);
    str getName() const;
    void setName(str name);
    void printData();
    void setData(unsigned int);
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};