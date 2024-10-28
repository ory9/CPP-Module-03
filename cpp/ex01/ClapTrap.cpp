#include "ClapTrap.hpp"

//======= Constructors start =======

ClapTrap::ClapTrap(): name("unamed"),hitPoints(0), energyPoints(0), attackDamage(0) {
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout  << "\033[032m" << "ClapTrap " <<name << " Created" << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->hitPoints << " (hitPoints) " << "Created" << std::endl;;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (energyPoints) " << "Created" << std::endl;;
    std::cout << std::setw(25) << std::setw(5) << this->attackDamage << " (attackDamage) " << "Created" << std::endl << std::endl;
}
 
ClapTrap::ClapTrap(const ClapTrap& obj){
    *this = obj;
}
//======= Constructors End =======

//======= Destructor Start =======
ClapTrap::~ClapTrap(){
    std::cout << "[ClapTrap Destructor]" << "\33[031m" << this->name << " has been destroyed. " << "\33[0m" << std::endl;
}
//======= Destructor End =======

//======= Copy Assigment Operator Start =======
ClapTrap & ClapTrap::operator = (const ClapTrap& cop){
    if (this != &cop)
    {
        this->hitPoints = cop.hitPoints;
        this->energyPoints = cop.energyPoints;
        this->attackDamage = cop.attackDamage;
    }
    return *this;
}
//======= Copy Assigment Operator End =======

//======= Member Functions Start =======
void ClapTrap::attack(const std::string& target){
    if (this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << "\33[031m" << this->name << "\33[0m" << " attacks " << "\33[032m" << target << "\33[0m" << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << "\33[032m" << this->name << "\33[0m" << " does not have enough Energy Points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Oh no !!! " << "\33[031m" << this->name << "\33[0m" << " lost " << amount << " Hit Points" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTap " << "\33[032m" << this->name << "\33[0m" << " has repaired itself !!! gaining " << amount << " Hit Points"<< std::endl;
    this->hitPoints += amount;
}

void ClapTrap::printData(){
    std::cout << this->hitPoints << std::endl;
}

void ClapTrap::setData(unsigned int y){
    hitPoints = y;
}
//======= Member Functions End =======