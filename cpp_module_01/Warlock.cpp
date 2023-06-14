#include "Warlock.hpp"

Warlock::Warlock()
{

}

Warlock::Warlock(const std::string& name, const std::string& title): name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
	this->index = 0;
	int	i = -1;
	while (++i < 10000)
	{
		spellList[i] = NULL;
	}
}

Warlock::Warlock(const Warlock& obj)
{
	*this = obj;
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	int	i = -1;
	while (++i < this->index)
	{
		if (spellList[i] != NULL)
		{
			delete spellList[i];
			spellList[i] = NULL;
		}
	}
}

Warlock&	Warlock::operator=(const Warlock& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
		this->index = rhs.getIndex();
		int i = -1;
		while (++i < 10000)
			this->spellList[i] = rhs.getSpellListItem(i);
	}
	return (*this);
}

const std::string&	Warlock::getName(void) const
{
	return (this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (this->title);
}

int	Warlock::getIndex(void) const
{
	return (this->index);
}

ASpell*	Warlock::getSpellListItem(int i) const
{
	return (this->spellList[i]);
}

void	Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

void	Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle()
				<< "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	spellList[this->index++] = spell->clone();
}

void	Warlock::forgetSpell(const std::string& spell)
{
	int	i = -1;
	while (++i < this->index)
	{
		if (spellList[i] != NULL && spellList[i]->getName() == spell)
		{
			delete spellList[i];
			spellList[i] = NULL;
			break ;
		}
	}
}

void	Warlock::launchSpell(const std::string& spell, const ATarget& target)
{
	int	i = -1;
	while (++i < this->index)
	{
		if (spellList[i] != NULL && spellList[i]->getName() == spell)
			spellList[i]->launch(target);
	}
}
