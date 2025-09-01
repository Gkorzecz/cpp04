#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Random_animal";
    std::cout << "A " << this->_type << " is born." << std::endl;
}

Animal::~Animal()
{
    std::cout << "A " << this->_type << " is DEAD." << std::endl;
}

Animal::Animal(const Animal& other) 
{
    this->_type = other._type;
    std::cout << "An animal cloned himself from a " << other._type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->_type = other._type;
    std::cout << "An animal copied some " << other._type << std::endl;
    return (*this);
}

void    Animal::setType(std::string type)
{
    this->_type = type;
}

const std::string Animal::getType(void) const
{
    return (this->_type);
}