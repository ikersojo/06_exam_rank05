#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::Polymorph(const Polymorph& obj) : ASpell("Polymorph", "turned into a critter")
{
	*this = obj;
}

Polymorph::~Polymorph()
{

}

Polymorph& Polymorph::operator=(const Polymorph& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return (*this);
}

ASpell*		Polymorph::clone(void) const
{
	return (new Polymorph());
}
