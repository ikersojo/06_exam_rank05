#ifndef POLYMORPH_HPP
	#define POLYMORPH_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"
	#include "ASpell.hpp"

	class ATarget;

	class Polymorph: public ASpell
	{
		public:
			Polymorph();
			Polymorph(const Polymorph& obj);
			~Polymorph();

			Polymorph& operator=(const Polymorph& rhs);

			virtual ASpell*		clone(void) const;

	};

#endif // POLYMORPH_HPP
