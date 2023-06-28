#ifndef DUMMY_HPP
	#define DUMMY_HPP

	#include <iostream>
	#include <string>
	#include "ASpell.hpp"
	#include "ATarget.hpp"

	class ASpell;

	class Dummy: public ATarget
	{
		public:
			Dummy(void);
			virtual ~Dummy(void);

			virtual Dummy*		clone(void) const;

	};

#endif // DUMMY_HPP
