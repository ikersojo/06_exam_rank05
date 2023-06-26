#include "ASpell.hpp"

ASpell::ASpell(void)
{

}

ASpell::ASpell(const std::string& name, const std::string& effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(const ASpell& obj)
{
    *this = obj;
}

ASpell::~ASpell(void)
{

}

ASpell& ASpell::operator=(const ASpell& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.getName();
        this->effects = rhs. getEffects();
    }
    return (*this);
}

const std::string   ASpell::getName(void) const
{
    return (this->name);
}

const std::string   ASpell::getEffects(void) const
{
    return (this->effects);
}

void    ASpell::launch(const ATarget& target)
{
    target.getHitBySpell(*this);
}
