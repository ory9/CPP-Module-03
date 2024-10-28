#include "ClapTrap.hpp"

int main(){
    ClapTrap Brian("Brian");
    ClapTrap Denis("Denis");

    Brian.attack("Denis");
    Denis.takeDamage(0);
    Denis.beRepaired(2);
    return 0;
}

// int main(){
//     ClapTrap Andrew;
//     ClapTrap Brian("Brian");
//     ClapTrap Denis("Denis");
//     ClapTrap girl("girl");
//     ClapTrap boy;

//     girl.setData(120);
//     boy = girl;
//     Brian.attack("Denis");
//     Denis.takeDamage(0);
//     Denis.beRepaired(2);
//     boy.printData();
//     return 0;
// }
