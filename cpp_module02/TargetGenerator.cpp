#include"TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}

TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget*>::iterator	itr = this->targetList.begin();
	while (itr != this->targetList.end())
	{
		delete itr->second;
		++itr;
	}
	this->targetList.clear();
}

void		TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		this->targetList[target->getType()] = target;
}

void		TargetGenerator::forgetTargetType(const std::string& type)
{
	if (this->targetList.find(type) != this->targetList.end())
	{
		delete this->targetList.find(type)->second;
		this->targetList.erase(targetList.find(type));
	}
}

ATarget*	TargetGenerator::createTarget(const std::string& type)
{
	if (this->targetList.find(type) != this->targetList.end())
		return this->targetList.find(type)->second;
	return NULL;
}
