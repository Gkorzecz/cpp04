#include "Animal.hpp"
#include "Cat.hpp"

/*int main(void)
{
    Animal Toucan;
    Animal Otarie(Toucan);
    Animal Elephant;
    Elephant = Toucan;
    Toucan.makeSound();
    return (0);
}*/

int main(void)
{
const Animal* meta = new Animal();

const Animal* i = new Cat();

std::cout << i->getType() << std::endl;
i->makeSound();

meta->makeSound();
delete meta;
delete i;
return (0);
}