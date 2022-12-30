
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->unequip(0);
    me->unequip(0);
    me->unequip(0);
    me->unequip(0);
    me->unequip(0);
    std::cout<<"\n\n";
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout<<"\n\n";
    delete bob;
    delete me;
    delete src;
    system("leaks AMateria");
    return 0;
}
