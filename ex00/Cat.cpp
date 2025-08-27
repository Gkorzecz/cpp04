#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "🐱 A kitten was born !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "🐱 A cat is dead..." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->_type = other._type;
    std::cout << "🐱 A cat cloned himself !!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "🐱 is this a... Copycat ? :)" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout <<  "🐾 Meooow" << std::endl;
}