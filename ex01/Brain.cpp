#include "Brain.hpp"

Brain::Brain()
{
    for(size_t i = 0; i < 100; i++)
        this->ideas[i] = "Random_Idea";
    std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for(size_t i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "A brain Copier." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
        for(size_t i = 0; i < 100; i++)
          this->ideas[i] = other.ideas[i];
    std::cout << "A brain copy-assignement."<< std::endl;
    return (*this);
}

const std::string& Brain::getIdea(size_t i) const
{
    static const std::string invalid; 
    if (i >= 100)
        return (invalid);
    return (this->ideas[i]);
}

void Brain::setIdea(size_t i, const std::string& idea)
{
    if (i >= 100)
        return;
    this->ideas[i] = idea;
}