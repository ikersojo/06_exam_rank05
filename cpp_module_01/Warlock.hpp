#ifndef WARLOCK_HPP
	#define WARLOCK_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"

	class Warlock
	{
		public:
			Warlock(const std::string& name, const std::string& title);
			~Warlock();

			const std::string&	getName(void) const;
			const std::string&	getTitle(void) const;
			ASpell*				getSpellListItem(int i) const;
			int					getIndex(void) const;
			void				setTitle(const std::string& newTitle);
			void				introduce(void) const;
			void				learnSpell(ASpell* spell);
			void				forgetSpell(const std::string& spell);
			void				launchSpell(const std::string& spell, const ATarget& target);

		private:
			Warlock(const Warlock& obj);
			Warlock();
			Warlock&	operator=(const Warlock& rhs);
			std::string	name;
			std::string	title;
			ASpell*		spellList[10000];
			int			index;
	};

#endif // WARLOCK_HPP
