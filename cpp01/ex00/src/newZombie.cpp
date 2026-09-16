#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name) {
	// The caller owns this heap-allocated Zombie and must eventually delete it.
    return new Zombie(name);
}