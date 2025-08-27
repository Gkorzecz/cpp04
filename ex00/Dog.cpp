#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "🐶 A puppy is born !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "🐶 A doggy is dead..." << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
    this->_type = other._type;
    std::cout << "🐶 A dog cloned himself !!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "🐶 This is a copy-dog !" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "🐕 Bwouf ...!" << std::endl;
}
