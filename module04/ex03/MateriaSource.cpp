
#include "MateriaSource.hpp"
MateriaSource::MateriaSource()
{
    int i = 0;
    while (i < SIZE)
    {
        this->_MateriaSource[i] = nullptr;
        i++;
    }
    this->nub_Amateria_in_MateriaSource = 0;
}

MateriaSource::~MateriaSource()
{

    int i = 0;
    while (i < SIZE)
    {
        if (this->_MateriaSource[i])
        {
            std::cout << "MateriaSource : delete\n";
            delete (this->_MateriaSource[i]);
        }
        i++;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    if (!m)
        return;
    if (this->nub_Amateria_in_MateriaSource >= SIZE)
    {
        std::cout << "I don't have permission to read this AMateria.\n";
        return;
    }
    while (i < SIZE)
    {
        if (!this->_MateriaSource[i])
        {
            this->_MateriaSource[i] = m;
            this->nub_Amateria_in_MateriaSource++;
            std::cout << "Added " << m->getType() << " to MateriaSource.\n";
            break;
        }
        i++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < SIZE)
    {
        if (this->_MateriaSource[i] && this->_MateriaSource[i]->getType() == type)
        {
            std::cout << "done\n";
            return this->_MateriaSource[i]->clone();
        }
        i++;
    }
    return (NULL);
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
    int i = 0;
    while (i < SIZE)
    {
        this->_MateriaSource[i] = nullptr;
        i++;
    }
    this->nub_Amateria_in_MateriaSource = 0;
    *this = cpy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cpy)
{
    if (this != &cpy)
    {
        int i = 0;
        while (i < SIZE)
        {
            if (this->_MateriaSource[i])
            {
                delete (this->_MateriaSource[i]);
                this->_MateriaSource[i] = cpy._MateriaSource[i]->clone();
            }
            i++;
        }
        this->nub_Amateria_in_MateriaSource = cpy.nub_Amateria_in_MateriaSource;
    }
    return *this;
}
