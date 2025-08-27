#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    void        setType(std::string type);
    const std::string getType(void) const;

    virtual void makeSound() const = 0;
};

#endif
