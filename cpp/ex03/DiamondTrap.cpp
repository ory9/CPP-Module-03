#include "DiamondTrap.hpp"

//======= Constructors start =======
DiamondTrap::DiamondTrap(){
    std::cout << "Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src), ScavTrap(src), FragTrap(src){
    *this = src;
}

DiamondTrap::DiamondTrap(str const & name): ClapTrap(name + "_clap_name") {
    this->name = name;
    FragTrap::setHitPoints(100);
    ScavTrap::setEnergyPoints(50);
    FragTrap::setAttackDamage(30);
    std::cout << "\033[035m" << "DiamondTrap " << this->name << " Created " << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints<< " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->energyPoints<< " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->attackDamage<< " (Attack Damage) Created " << std::endl << std::endl;
}
//======= Constructors End =======

//======= Destructor Start =======
DiamondTrap::~DiamondTrap(){
    std::cout << std::endl << "[Destructor] "<< "\033[31m" << "DiamondTrap Session Ended" << "\033[0m" << std::endl;
}
//======= Destructor End =======

//======= Copy Assigment Operator Start =======
DiamondTrap &DiamondTrap::operator = (DiamondTrap const & src){
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return *this;
}
//======= Copy Assigment Operator End =======

//======= Member Functions Start =======
void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap Name: " << this->name << " and " << " ClapTrap Name: " << ClapTrap::name << std::endl;
}
//======= Member Functions End =======