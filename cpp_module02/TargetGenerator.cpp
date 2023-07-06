#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}

TargetGenerator::~TargetGenerator(void)
{
	std::map< std::string, ATarget* >::iterator	itr = this->targetList.begin();
	while (itr != this->targetList.end())
	{
		delete itr->second;
		++itr;
	}
	this->targetList.clear();
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		this->targetList[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(const std::string& targetType)
{
	if (this->targetList.find(targetType) != this->targetList.end())
	{
		delete this->targetList.find(targetType)->second;
		this->targetList.erase(this->targetList.find(targetType));
	}
}

ATarget*	TargetGenerator::createTarget(const std::string& targetType)
{
	if (this->targetList.find(targetType) != this->targetList.end())
		return this->targetList.find(targetType)->second;
	return NULL;
}
