#include "FragTrap.hpp"

//======= Constructors Start =======
FragTrap::FragTrap(){}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(){
    *this = src;
}

FragTrap::FragTrap(str name): ClapTrap(){
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "\033[036m" << "FragTrap " << this->name << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints << " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->attackDamage << " (Attack Damage) Created " << std::endl;
}
    
FragTrap::~FragTrap(){
    std::cout << "\033[031m" << "FragTrap " << this->name  << " *** Time - Out ***" << "\033[0m"<< std::endl;
}
//====== Constructors End ======

//======= Copy Assignment Operator Start =======
FragTrap & FragTrap::operator = (FragTrap const & src){
    if (this != &src)
    {
        this->name = src.getName();
        this->hitPoints = src.getHitPoints();
        this->energyPoints = src.getEnergyPoints();
        this->attackDamage = src.getAttackDamage();
    }
    return *this;
}
//====== Copy Assignment Operator End =======

//======= Member functions Start ====== 
void FragTrap::highFivesGuys(void){
    std::cout << "@FragTrap " << " Who wants a High Five Now ?" <<std::endl;
}

void FragTrap::attack(const str & target){
    std::cout << "@FragTrap " << "\033[031m" << this->name <<"\033[0m" << " attacked " << target << " causing " << this->attackDamage \
    << " attack Damage" << std::endl;
}
//======= Member functions End ====== 