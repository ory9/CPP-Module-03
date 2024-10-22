#include "FragTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    FragTrap Thomas("Thomas");

    Brian.attack("Thomas");
    Thomas.takeDamage(Brian.getAttackDamage());
    Thomas.beRepaired(2);

    Thomas.attack("Brian");
    Brian.takeDamage(Thomas.getAttackDamage());
    Brian.beRepaired(50);
    Thomas.highFivesGuys();
    return 0;
}
