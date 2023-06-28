#ifndef POLYMORPH_HPP
	#define POLYMORPH_HPP

	#include "ASpell.hpp"

	class Polymorph : public ASpell
	{
		public:
			Polymorph(void);
			virtual ~Polymorph(void);

			Polymorph*		clone(void) const;
	};

#endif // POLYMORPH_HPP
