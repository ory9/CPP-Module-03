#include "ScavTrap.hpp"

//======= Constructors Start =======
ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor Called" << std::endl<< std::endl;
}

ScavTrap::ScavTrap(str Name){
    this->name = Name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "\033[034m" << "ScavTrap " << this->name << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints << " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->attackDamage << " (Attack Damage) Created " << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src){
    *this = src;
}

ScavTrap::~ScavTrap(){
    std::cout << "\033[031m" << "ScavTrap " << this->name  << " has ... Exploided " << "\033[0m"<< std::endl;
}
//====== Constructors End ======

//======= Copy Assignment Operator Start =======
ScavTrap &ScavTrap::operator = (ScavTrap const & src){
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->attackDamage = src.attackDamage;
        this->energyPoints = src.energyPoints;
    }
    return *this;

}
//====== Copy Assignment Operator End =======

//======= Member functions Start ====== 
void ScavTrap::attack(const std::string& target){
    std::cout << "\033[034m" << "Wicked ScavTrap " << this->name << " attacked " << target << " causing " << this->attackDamage \
    << " attack Damage" <<"\033[0m" << std::endl ;
}

void ScavTrap::guardGate(){
    std::cout << "\033[034m" << "Wicked ScavTrap "  << this->name  << " is now in Gate keeper mode." <<"\033[0m" << std::endl;
}
//======= Member functions End ====== 
