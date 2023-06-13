#ifndef FWOOSH_HPP
	#define FWOOSH_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"
	#include "ASpell.hpp"

	class ATarget;

	class Fwoosh: public ASpell
	{
		public:
			Fwoosh();
			Fwoosh(const Fwoosh& obj);
			~Fwoosh();

			Fwoosh& operator=(const Fwoosh& rhs);

			ASpell*		clone(void) const;

	};

#endif // FWOOSH_HPP