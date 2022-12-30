#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#define SIZE 4
#include "IMateriaSource.hpp"
// class materiaSource b7al templates t9dar dwaz lih {Ice}
// ola {cure} hwa radi returni lik pointer AMateria 3la {ice or cure}
// polymorphisme

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_MateriaSource[SIZE];
    int nub_Amateria_in_MateriaSource;

public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &cpy);
    MateriaSource &operator=(MateriaSource const &cpy);
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif
