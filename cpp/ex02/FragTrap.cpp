#include "FragTrap.hpp"

//======= Constructors Start =======
FragTrap::FragTrap(){
    std::cout << "FragTrap Default Constructor Called" << std::endl<< std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(){
    *this = src;
}

FragTrap::FragTrap(str name): ClapTrap(){
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "\033[035m" << "FragTrap " << this->name << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints << " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->attackDamage << " (Attack Damage) Created " << std::endl << std::endl;
}
    
FragTrap::~FragTrap(){
    std::cout << "[FragTrap Destructor] " << "\033[031m" << this->name  << " *** Time - Out ***" << "\033[0m"<< std::endl;
}
//====== Constructors End ======

//======= Copy Assignment Operator Start =======
FragTrap & FragTrap::operator = (FragTrap const & src){
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return *this;
}
//====== Copy Assignment Operator End =======

//======= Member functions Start ====== 
void FragTrap::highFivesGuys(void){
    std::cout << "@FragTrap " << " Who wants a High Five Now ?" <<std::endl<<std::endl;
}

void FragTrap::attack(const std::string& target){
    std::cout << "@FragTrap " << "\033[031m" << this->name <<"\033[0m" << " attacked " << target << " causing " << this->attackDamage \
    << " points of Damage" << std::endl;
}
//======= Member functions End ====== 