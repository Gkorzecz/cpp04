#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "🐱 A WrongKitten was born !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "🐱 A WrongCat is dead..." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    this->_type = other._type;
    std::cout << "🐱 A WrongCat cloned himself !!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "🐱 is this a... WrongCopycat ? :)" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout <<  "🐾 Meooow" << std::endl;
}