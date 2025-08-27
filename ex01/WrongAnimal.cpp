#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Wrong_Random_animal";
    std::cout << "A " << this->_type << " is born." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "A " << this->_type << " is DEAD." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) 
{
    this->_type = other._type;
    std::cout << "An WrongAnimal cloned himself from a " << other._type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        this->_type = other._type;
    std::cout << "An WrongAnimal copied some " << other._type << std::endl;
    return (*this);
}

void    WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

const std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "## RANDOM WRONG ANIMAL NOISES ##" << std::endl;
}