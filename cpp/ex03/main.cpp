#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Godfrey("Godfrey");

    Godfrey.guardGate();
    Godfrey.highFivesGuys();
    Godfrey.whoAmI();
    Godfrey.ScavTrap::attack("Brian");
    return 0;
}

// int main()
// {
//     ClapTrap *obj = new DiamondTrap;
//     delete obj;
// }

// int main(){
//     ClapTrap Person("Person");
//     ClapTrap Robert("Robert");
//     ScavTrap Andrew("Andrew");
//     FragTrap Stephen("Stephen");
//     DiamondTrap Ivan("Ivan");
//     DiamondTrap op;

//     Person.attack("Robert");
//     Robert.takeDamage(Person.getAttackDamage());
//     Robert.beRepaired(2);

//     Andrew.guardGate();
//     Andrew.attack("Robert");
//     Robert.takeDamage(Andrew.getAttackDamage());
//     Robert.beRepaired(10);

//     Stephen.attack("Andrew");
//     Andrew.takeDamage(Stephen.getAttackDamage());
//     Andrew.beRepaired(50);
//     Stephen.highFivesGuys();

//     Ivan.ScavTrap::attack("Andrew");
//     Andrew.takeDamage(Ivan.getAttackDamage());
//     Andrew.beRepaired(20);
//     return 0;
// }
