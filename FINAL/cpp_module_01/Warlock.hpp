#ifndef WARLOCK_HPP
	#define WARLOCK_HPP

	#include <iostream>
	#include <string>
	#include "ASpell.hpp"
	#include <vector>

	class ASpell;
	
	class Warlock
	{
		public:
			Warlock(const std::string& newName, const std::string& newTitle);
			~Warlock();

			const std::string&	getName(void) const;
			const std::string&	getTitle(void) const;
			void				setTitle(const std::string& newTitle); 
			void				introduce(void) const;
			void				learnSpell(const ASpell* spell);
			void				forgetSpell(const std::string& spellName);
			void				launchSpell(const std::string& spellName, const ATarget& target);

		private:
			Warlock(void);
			Warlock(const Warlock& obj);
			Warlock&		operator=(const Warlock& rhs);

			std::string					name;
			std::string					title;
			std::vector<const ASpell*>	spellList;
			size_t						index;
	};

#endif // WARLOCK_HPP
