#include "../include/Zombie.hpp"

void randomChump(std::string name) {
	// This local Zombie is destroyed automatically when the function returns.
    Zombie z(name);
    z.announce();
}