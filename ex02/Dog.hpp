#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;

public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
    const std::string& getIdea(std::size_t i) const;
    void  setIdea(std::size_t i, const std::string& idea);
};

#endif
