#include"ATarget.hpp"

ATarget::ATarget(void)
{

}

ATarget::ATarget(const std::string& newType) : type(newType)
{

}

ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}

ATarget&	ATarget::operator=(const ATarget& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return(*this);
}

ATarget::~ATarget(void)
{

}

const std::string&		ATarget::getType(void) const
{
	return(this->type);
}

void					ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->getType()  << " has been " << spell.getEffects() << "!" << std::endl;
}
