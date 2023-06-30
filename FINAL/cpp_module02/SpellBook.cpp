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
		this->spellList[spell->getName()] = spell;
}

void	SpellBook::forgetSpell(const std::string& spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
	{
		delete this->spellList.find(spellName)->second;
		this->spellList.erase(spellName);
	}
}

ASpell*	SpellBook::createSpell(const std::string& spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
		return (this->spellList[spellName]);
	return (NULL);
}
