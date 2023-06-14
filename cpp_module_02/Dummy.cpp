#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy& obj) : ATarget("Target Practice Dummy")
{
	*this = obj;
}

Dummy::~Dummy()
{

}

Dummy& Dummy::operator=(const Dummy& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return(*this);
}

ATarget*		Dummy::clone(void) const
{
	return (new Dummy());
}
