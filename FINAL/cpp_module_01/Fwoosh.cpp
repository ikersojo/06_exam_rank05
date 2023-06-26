#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell()
{
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh& obj) : ASpell()
{
    *this = obj;
}

Fwoosh::~Fwoosh(void)
{

}

Fwoosh& Fwoosh::operator=(const Fwoosh& rhs)
{
    if (this != &rhs)
        return(*this);
    return (*this);
}

ASpell*     Fwoosh::clone(void)
{
    return (new Fwoosh());
}
