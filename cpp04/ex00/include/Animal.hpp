#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	// Virtual dispatch and destruction make Animal safe as a base-class pointer.
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif