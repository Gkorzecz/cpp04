#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    const std::string& getIdea(size_t i) const;
    void setIdea(size_t i, const std::string& idea);
};

#endif
