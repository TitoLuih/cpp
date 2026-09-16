#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	// This class intentionally has no virtual functions for comparison with Animal.
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif