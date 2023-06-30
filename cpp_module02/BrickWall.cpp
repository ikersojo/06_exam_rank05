#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Target Practice BrickWall")
{

}

BrickWall::~BrickWall(void)
{

}

BrickWall*		BrickWall::clone(void) const
{
	return (new BrickWall());
}
