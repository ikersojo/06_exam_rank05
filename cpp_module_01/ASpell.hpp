#ifndef ASPELL_HPP
	#define ASPELL_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"

	class ATarget;

	class ASpell
	{
		public:
			ASpell();
			ASpell(const std::string& name, const std::string& effects);
			ASpell(const ASpell& obj);
			virtual ~ASpell();

			ASpell& operator=(const ASpell& rhs);

			const std::string&	getName(void) const;
			const std::string&	getEffects(void) const;
			void				launch(const ATarget& target) const;
			virtual ASpell*		clone(void) const = 0;

		protected:
			std::string	name;
			std::string	effects;
	};

#endif // ASPELL_HPP
