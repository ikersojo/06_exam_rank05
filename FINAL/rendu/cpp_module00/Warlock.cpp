#include "Warlock.hpp"
Warlock::Warlock(){}

Warlock::Warlock(const Warlock& obj)
{
	*this = obj;
}

Warlock::Warlock(const std::string& newName, const std::string& newTitle) : name(newName), title(newTitle)
{
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
