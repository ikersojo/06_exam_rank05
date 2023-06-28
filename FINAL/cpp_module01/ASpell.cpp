#include "ASpell.hpp"

ASpell::ASpell(void)
{

}

ASpell::ASpell(const std::string& newName, const std::string& newEffects): name(newName), effects(newEffects)
{

}

ASpell::ASpell(const ASpell& obj)
{
	*this = obj;
}

ASpell&	ASpell::operator=(const ASpell& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return (*this);
}

ASpell::~ASpell(void)
{

}

std::string			ASpell::getName(void) const
{
	return (this->name);
}

std::string			ASpell::getEffects(void) const
{
	return (this->effects);
}

void				ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
