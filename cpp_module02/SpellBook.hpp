#ifndef SPELLBOOK_HPP
	#define SPELLBOOK_HPP

	#include <string>
	#include <iostream>
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

		private:
			std::map< std::string, ASpell* >	spellList;
	};

#endif // SPELLBOOK_HPP
