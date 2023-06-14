#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::Fireball(const Fireball& obj) : ASpell("Fireball", "burnt to a crisp")
{
	*this = obj;
}

Fireball::~Fireball()
{

}

Fireball& Fireball::operator=(const Fireball& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return (*this);
}

ASpell*		Fireball::clone(void) const
{
	return (new Fireball());
}
