#include "ScavTrap.hpp"
//======= Constructors Start =======
ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor Called" <<std::endl;
}

ScavTrap::ScavTrap(str Name): ClapTrap(){
    this->setName(Name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "\033[034m" << "ScavTrap " << this->name << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints << " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->attackDamage << " (Attack Damage) Created " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(){
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
        this->name = src.getName();
        this->hitPoints = src.getHitPoints();
        this->attackDamage = src.getAttackDamage();
        this->energyPoints = src.getEnergyPoints();
    }
    return *this;

}
//====== Copy Assignment Operator End =======

//======= Member functions Start ====== 
void ScavTrap::attack(const std::string& target){
    std::cout << "\033[034m" << "Wicked ScavTrap " << this->name << " attacked " << target << " causing " << this->attackDamage \
    << " attack Damage" << "\033[0m" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "\033[034m" << "Wicked ScavTrap " << this->name << " is now in Gate keeper mode." <<"\033[0m" << std::endl;
}
//======= Member functions End ====== 
