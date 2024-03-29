#include "Warlock.hpp"

Warlock::Warlock(const std::string& newName, const std::string& newTitle) :
name(newName), title(newTitle)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;

	std::map< std::string, ASpell* >::iterator	itr = this->spellList.begin();
	while (itr != this->spellList.end())
	{
		delete itr->second;
		++itr;
	}
	this->spellList.clear();
}

const std::string&	Warlock::getName(void) const
{
	return (this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (this->title);
}

void				Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

void				Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		this->spellList[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
	{
		delete this->spellList.find(spellName)->second;
		this->spellList.erase(this->spellList.find(spellName));
	}
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target)
{
	if (this->spellList.find(spellName) != this->spellList.end())
	{
		this->spellList.find(spellName)->second->launch(target);
	}
}

