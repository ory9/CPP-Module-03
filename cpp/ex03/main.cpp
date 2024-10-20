#include "DiamondTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ClapTrap Ojok("Ojok");
    ScavTrap Obinna("Obinna");
    FragTrap Odule("Odule");
    DiamondTrap Okema("Okema");

    Brian.attack("Ojok");
    Ojok.takeDamage(Brian.getAttackDamage());
    Ojok.beRepaired(2);

    Obinna.guardGate();
    Obinna.attack("Ojok");
    Ojok.takeDamage(Obinna.getAttackDamage());
    Ojok.beRepaired(10);

    Odule.attack("Obinna");
    Obinna.takeDamage(Odule.getAttackDamage());
    Obinna.beRepaired(50);
    Odule.highFivesGuys();

    Okema.ScavTrap::attack("Obinna");
    Obinna.takeDamage(Okema.getAttackDamage());
    Obinna.beRepaired(20);
    Okema.whoAmI();
    return 0;
}
