#include "Warlock.hpp"
Warlock::Warlock()
{
	this->index = 0;
}

Warlock::Warlock(const Warlock& obj)
{
	*this = obj;
}

Warlock::Warlock(const std::string& newName, const std::string& newTitle) : name(newName), title(newTitle)
{
	this->index = 0;
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock&		Warlock::operator=(const Warlock& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName(void) const
{
	return(this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return(this->title);
}

void				Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

void				Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(const ASpell* spell)
{
	this->spellList.push_back(spell);
	index++;
}

void	Warlock::forgetSpell(const std::string& spellName)
{
	size_t i = 0;
	while(i < this->index)
	{
		if (this->spellList[i] != NULL && this->spellList[i]->getName() == spellName)
		{
			delete this->spellList[i];
			this->spellList[i] = NULL;
			break ;
		}
		i++;
	}
}

void	Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
	size_t i = 0;
	while(i < this->index)
	{
		if (this->spellList[i] != NULL && this->spellList[i]->getName() == spellName)
		{
			target.getHitBySpell(*this->spellList[i]);
			break ;
		}
		i++;
	}
}

