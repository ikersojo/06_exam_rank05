#include"TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}

TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget*>::iterator	itr = targetList.begin();
	while (itr != targetList.end())
	{
		delete itr->second;
		++itr;
	}
	targetList.clear();
}

void		TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		targetList[target->getType()] = target;
}

void		TargetGenerator::forgetTargetType(const std::string& type)
{
	if (targetList.find(type) != targetList.end())
	{
		delete targetList.find(type)->second;
		targetList.erase(targetList.find(type));
	}
}

ATarget*	TargetGenerator::createTarget(const std::string& type)
{
	if (targetList.find(type) != targetList.end())
		return targetList.find(type)->second;
	return NULL;
}
