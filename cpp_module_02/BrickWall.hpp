#ifndef BRICKWALL_HPP
	#define BRICKWALL_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"
	#include "ATarget.hpp"

	class ASpell;

	class BrickWall : public ATarget
	{
		public:
			BrickWall();
			BrickWall(const BrickWall& obj);
			~BrickWall();

			BrickWall& operator=(const BrickWall& rhs);

			virtual ATarget*	clone(void) const;
	};

#endif // BRICKWALL_HPP
