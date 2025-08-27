#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain)
{
    this->_type = "Dog";
    std::cout << "🐶 A puppy is born !" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "🐶 A doggy is dead..." << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    std::cout << "🐶 A dog cloned himself !!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    std::cout << "🐶 This is a copy-dog !" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "🐕 Bwouf ...!" << std::endl;
}

const std::string& Dog::getIdea(std::size_t i) const
{
    return (this->_brain->getIdea(i));
}

void Dog::setIdea(std::size_t i, const std::string& idea)
{
    this->_brain->setIdea(i, idea);
}
