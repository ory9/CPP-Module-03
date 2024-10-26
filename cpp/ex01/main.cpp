#include "ScavTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ScavTrap James("James");

    James.guardGate();
    James.attack("Denis");
    Brian.takeDamage(14);
    Brian.beRepaired(10);
    return 0;
}


// int main()
// {
//     ClapTrap *obj = new ScavTrap;
//     ClapTrap boy("boy");
//     ScavTrap girl("girl");
//     delete obj;
// }