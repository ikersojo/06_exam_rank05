#include "ATarget.hpp"

ATarget::ATarget() : type("un-known")
{

}

ATarget::ATarget(const std::string type) : type(type)
{

}

ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}

ATarget::~ATarget()
{

}

ATarget& ATarget::operator=(const ATarget& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return(*this);
}

const std::string&	ATarget::getType(void) const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
