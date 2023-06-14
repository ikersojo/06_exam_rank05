#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const Fwoosh& obj) : ASpell("Fwoosh", "fwooshed")
{
	*this = obj;
}

Fwoosh::~Fwoosh()
{

}

Fwoosh& Fwoosh::operator=(const Fwoosh& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return (*this);
}

ASpell*		Fwoosh::clone(void) const
{
	return (new Fwoosh());
}
