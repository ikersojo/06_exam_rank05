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
	while (++i < 10000)
	{
		if (spellList[i] != NULL)
		{
			std::cout << "debug" << std::endl;
			delete spellList[i];
		}
	}
}

Warlock&	Warlock::operator=(const Warlock& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
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

void	Warlock::forgetSpell(std::string spell)
{
	int	i = -1;
	while (++i < this->index)
	{
		if (spellList[i] && spellList[i]->getName() == spell)
		{
			delete spellList[i];
			spellList[i] = NULL;
			break ;
		}
	}
}

void	Warlock::launchSpell(std::string spell, const ATarget& target)
{
	int	i = -1;
	while (++i < this->index)
	{
		if (spellList[i] && spellList[i]->getName() == spell)
			spellList[i]->launch(target);
	}
}

