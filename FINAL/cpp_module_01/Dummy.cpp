#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget()
{
    this->type = "Target Practice Dummy";
}

Dummy::Dummy(const Dummy& obj) : ATarget()
{
    *this = obj;
}

Dummy::~Dummy(void)
{

}

Dummy&    Dummy::operator=(const Dummy& rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

ATarget*    Dummy::clone(void)
{
    return (new Dummy());
}
