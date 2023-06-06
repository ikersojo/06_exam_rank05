#include "Warlock.hpp"

Warlock::Warlock(void)
{

}

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& obj)
{
	*this = obj;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

Warlock& Warlock::operator=(const Warlock& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return (*this);
}

// ----------------------------------------------------------------------------
const std::string&	Warlock::getName(void) const
{
	return(this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return(this->title);
}

void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", "
				<< this->getTitle() << "!" << std::endl;
}
