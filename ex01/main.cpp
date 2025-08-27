#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include "iostream"

int main(void)
{
    std::cout << "\033[1mBASIC TESTS :\033[0m" << std::endl;
    const Animal* a1 = new Animal();
    const Animal* a2 = new Dog();
    const Animal* a3 = new Cat();
    std::cout << a2->getType() << '\n';
    std::cout << a3->getType() << '\n';
    a3->makeSound();
    a2->makeSound();
    a1->makeSound();
    delete a1;
    delete a2;
    delete a3;
    std::cout << "\n";

    std::cout << "\033[1mCOPY CONSTRUCTOR TESTS :\033[0m" << std::endl;
    Dog original;
    original.setIdea(0, "Catch the stick !");
    Dog clone(original);
    original.setIdea(0, "Be a good Doggo !");
    std::cout << "original idea : " << original.getIdea(0) << '\n';
    std::cout << "clone idea : " << clone.getIdea(0) << '\n';
    std::cout << "\n";

    std::cout << "\033[1mCOPY ASSIGNEMENT TESTS :\033[0m" << std::endl;
    Cat origicat;
    origicat.setIdea(0, "Chase the laser.");
    Cat copycat;
    copycat = origicat;
    origicat.setIdea(0, "Sleep on keyboard.");
    std::cout << "origicat idea : " << origicat.getIdea(0)  << '\n';
    std::cout << "copycat idea : " << copycat.getIdea(0) << '\n';
    copycat = copycat;
    std::cout << "\n";

    std::cout << "\033[1mMASSIVE EXTINCTON :\033[0m" << std::endl;
}