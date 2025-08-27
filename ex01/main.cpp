#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "iostream"

int main(void)
{
std::cout << "\033[1mBASIC TESTS :\033[0m" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();
delete i;
delete j;
delete meta;
std::cout << "\n";

std::cout << "\033[1mSTACK TESTS :\033[0m (constructor/destructor order)" << std::endl;
Dog dogOnStack;
Cat catOnStack;
std::cout << "\n";

std::cout << "\033[1mCOPY-CONSTRUCTOR TESTS :\033[0m" << std::endl;
Dog original;
Dog copy(original);
std::cout << "Original type: " << original.getType() << " | Copy type: " << copy.getType() << '\n';
copy.makeSound();
std::cout << "\n";

std::cout << "\033[1mCOPY-ASSIGNEMENT TESTS :\033[0m" << std::endl;
Cat a;
Cat b;
b = a;
std::cout << "a type: " << a.getType() << " | b type: " << b.getType() << '\n';
b.makeSound();
Dog self;
self = self;
std::cout << "After self-assignment: " << self.getType() << '\n';
std::cout << "\n";

std::cout << "\033[1mZOO TESTS :\033[0m" << std::endl;
Animal* zoo[4];
for (int i = 0; i < 4; ++i)
    if (i % 2 == 0)
        zoo[i] = new Cat();
    else
        zoo[i] = new Dog();;
for (int i = 0; i < 4; ++i)
    zoo[i]->makeSound();
for (int i = 0; i < 4; ++i)
    delete zoo[i];
std::cout << "\n";

std::cout << "\033[1mMASSIVE EXTINCTON :\033[0m" << std::endl;
return (0);
}