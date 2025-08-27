#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain)
{
    this->_type = "Cat";
    std::cout << "🐱 A kitten was born !" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "🐱 A cat is dead..." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    std::cout << "🐱 A cat cloned himself !!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    std::cout << "🐱 is this a... Copycat ? :)" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout <<  "🐾 Meooow" << std::endl;
}

const std::string& Cat::getIdea(std::size_t i) const
{
    return (this->_brain->getIdea(i));
}

void Cat::setIdea(std::size_t i, const std::string& idea)
{
    this->_brain->setIdea(i, idea);
}