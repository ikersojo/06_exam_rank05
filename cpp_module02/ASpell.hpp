#ifndef ASPELL_HPP
	#define ASPELL_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"

	class ATarget;

	class ASpell
	{
		public:
			ASpell(void);
			ASpell(const std::string& newName, const std::string& newEffects);
			ASpell(const ASpell& obj);
			ASpell&	operator=(const ASpell& rhs);
			virtual ~ASpell(void);

			std::string		getName(void) const;
			std::string		getEffects(void) const;
			virtual ASpell*	clone(void) const = 0;
			void			launch(const ATarget& target);
		protected:
			std::string	name;
			std::string	effects;
	};


#endif // ASPELL_HPP
