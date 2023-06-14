#ifndef FIREBALL_HPP
	#define FIREBALL_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"
	#include "ASpell.hpp"

	class ATarget;

	class Fireball: public ASpell
	{
		public:
			Fireball();
			Fireball(const Fireball& obj);
			~Fireball();

			Fireball& operator=(const Fireball& rhs);

			virtual ASpell*		clone(void) const;

	};

#endif // FIREBALL_HPP
