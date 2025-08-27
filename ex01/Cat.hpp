#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain* _brain;

public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
    const std::string& getIdea(std::size_t i) const;
    void setIdea(std::size_t i, const std::string& idea);
};

#endif