#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const Fwoosh& obj)
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
