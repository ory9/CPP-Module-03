#include "ScavTrap.hpp"

int main(){
    ScavTrap Ford;
    ClapTrap Brian("Brian");
    ScavTrap James("James");

    James.guardGate();
    James.attack("Denis");
    Brian.takeDamage(14);
    Brian.beRepaired(10);
    return 0;
}
