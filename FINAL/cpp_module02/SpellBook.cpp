#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{

}

SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell *>::iterator itr = this->spellList.begin();
	while (itr != this->spellList.end())
	{
		delete itr->second;
		++itr;
	}
	this->spellList.clear();
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spellList[spell->getName()] = spell;
}

void	SpellBook::forgetSpell(const std::string& spellName)
{
	if (spellList.find(spellName) != spellList.end())
	{
		delete spellList.find(spellName)->second;
		spellList.erase(spellName);
	}
}

ASpell*	SpellBook::createSpell(const std::string& spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
		return (spellList[spellName]);
	return (NULL);
}
