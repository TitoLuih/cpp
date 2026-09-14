#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie *zombie = newZombie("HeapZombie");
    zombie->announce();
    delete zombie;

    randomChump("StackZombie");

    return 0;
}