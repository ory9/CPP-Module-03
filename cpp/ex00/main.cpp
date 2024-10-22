#include "ClapTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ClapTrap Denis("Denis");

    Brian.attack("Denis");
    Denis.takeDamage(Brian.getAttackDamage());
    Denis.beRepaired(2);
    return 0;
}
