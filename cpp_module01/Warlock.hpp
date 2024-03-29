#ifndef WARLOCK_HPP
	#define WARLOCK_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"
	#include "ATarget.hpp"
	#include <map>

	class ATarget;
	class ASpell;

	class Warlock
	{
		public:
			Warlock(const std::string& newName, const std::string& newTitle);
			~Warlock(void);

			const std::string&	getName(void) const;
			const std::string&	getTitle(void) const;
			void				setTitle(const std::string& newTitle);
			void				introduce(void) const;

			void	learnSpell(ASpell* spell);
			void	forgetSpell(std::string spellName);
			void	launchSpell(std::string spellName, const ATarget& target);

		private:
			Warlock(void);
			Warlock(const Warlock& obj);
			Warlock&	operator=(const Warlock& rhs);

			std::string							name;
			std::string							title;
			std::map< std::string, ASpell* >	spellList;
	};

#endif // WARLOCK_HPP
