#ifndef SPELLBOOK_HPP
	#define SPELLBOOK_HPP

	#include <iostream>
	#include <string>
	#include "ASpell.hpp"
	#include <map>

	class ASpell;

	class SpellBook
	{
		public:
			SpellBook(void);
			~SpellBook(void);

			void	learnSpell(ASpell* spell);
			void	forgetSpell(const std::string& spellName);
			ASpell*	createSpell(const std::string& spellName);

			std::map<std::string, ASpell*>	spellList;

		private:
			SpellBook(const SpellBook& obj);
			SpellBook&	operator=(const SpellBook& rhs);

	};

#endif // SPELLBOOK_HPP
