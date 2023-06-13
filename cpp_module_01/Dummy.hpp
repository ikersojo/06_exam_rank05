#ifndef DUMMY_HPP
	#define DUMMY_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"
	#include "ATarget.hpp"

	class ASpell;

	class Dummy : public ATarget
	{
		public:
			Dummy();
			Dummy(const Dummy& obj);
			~Dummy();

			Dummy& operator=(const Dummy& rhs);

			ATarget*	clone(void) const;
	};

#endif // DUMMY_HPP
