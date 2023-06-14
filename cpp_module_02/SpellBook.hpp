#ifndef SPELLBOOK_HPP
	#define SPELLBOOK_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"

	class ASpell;

	class SpellBook
	{
		public:
			SpellBook();
			~SpellBook();

			void		learnSpell(ASpell* spell);
			void		forgetSpell(const std::string& spellName);
			ASpell*		createSpell(const std::string& spellName);
		
		private:
			SpellBook(const SpellBook& obj);
			const SpellBook&	operator=(const SpellBook& rhs);

			ASpell*	bookContent[10000];
			int		index;

	};

# endif //SPELLBOOK_HPP
