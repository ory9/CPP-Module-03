#include "ClapTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ClapTrap Ojok("Ojok");

    Brian.attack("Ojok");
    Ojok.takeDamage(Brian.getAttackDamage());
    Ojok.beRepaired(2);
    return 0;
}
