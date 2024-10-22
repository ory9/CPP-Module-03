#include "ScavTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ScavTrap James("James");

    James.guardGate();
    James.attack("Denis");
    Brian.takeDamage(James.getAttackDamage());
    Brian.beRepaired(10);
    return 0;
}
