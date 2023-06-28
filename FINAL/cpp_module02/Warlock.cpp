#include "Warlock.hpp"

Warlock::Warlock(const std::string& newName, const std::string& newTitle) : name(newName), title(newTitle)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
	this->book = new SpellBook;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell *>::iterator itr = this->book->spellList.begin();
	while (itr != this->book->spellList.end())
	{
		delete itr->second;
		++itr;
	}
	this->book->spellList.clear();
	delete book;
}

const std::string&		Warlock::getName(void) const
{
	return (this->name);
}

const std::string&		Warlock::getTitle(void) const
{
	return (this->title);
}

void					Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

void					Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if(spell)
		book->learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spellName)
{
	book->forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target)
{
	book->createSpell(spellName);
	book->spellList[spellName]->launch(target);
}
