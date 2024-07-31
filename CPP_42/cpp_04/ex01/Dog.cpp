#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete this->brain;
	return;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog operator=() overload" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain	*Dog::get_brain(void) const
{
	return (this->brain);
}