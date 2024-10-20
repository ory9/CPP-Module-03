#include "ScavTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ClapTrap Ojok("Ojok");
    ScavTrap Obinna("Obinna");

    Brian.attack("Ojok");
    Ojok.takeDamage(Brian.getAttackDamage());
    Ojok.beRepaired(2);
    Obinna.guardGate();
    Obinna.attack("Ojok");
    Ojok.takeDamage(Obinna.getAttackDamage());
    Ojok.beRepaired(10);
    return 0;
}
