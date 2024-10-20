#include "DiamondTrap.hpp"

//======= Constructors start =======
DiamondTrap::DiamondTrap(){
    std::cout << "Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src), ScavTrap(src),  FragTrap(src){
    *this = src;
}

DiamondTrap::DiamondTrap(str const & name): ClapTrap(name + "_clap_name"){
    _name = name;
    this->name = ClapTrap::name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "\033[036m" << "Diamond is here " << this->name << "\033[0m" << std::endl;
    std::cout << std::setw(25) << std::setw(5)<< this->hitPoints << " (Hit Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->energyPoints << " (Energy Points) Created " << std::endl;
    std::cout << std::setw(25) << std::setw(5) << this->getAttackDamage() << " (Attack Damage) Created " << std::endl;
}
//======= Constructors End =======

//======= Destructor Start =======
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Session Ended" << std::endl;
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
    std::cout << "DiamondTrap Name: " << name << " and " << " ClapTrap Name: " << ClapTrap::name << std::endl;
}
//======= Member Functions End =======