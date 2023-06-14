#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(const BrickWall& obj) : ATarget("Inconspicuous Red-brick Wall")
{
	*this = obj;
}

BrickWall::~BrickWall()
{

}

BrickWall& BrickWall::operator=(const BrickWall& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return(*this);
}

ATarget*		BrickWall::clone(void) const
{
	return (new BrickWall());
}
