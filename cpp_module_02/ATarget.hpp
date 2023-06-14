#ifndef ATARGET_HPP
	#define ATARGET_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"

	class ASpell;

	class ATarget
	{
		public:
			ATarget();
			ATarget(const std::string& type);
			ATarget(const ATarget& obj);
			virtual ~ATarget();

			ATarget& operator=(const ATarget& rhs);

			const std::string&	getType(void) const;
			virtual ATarget*	clone(void) const = 0;
			void				getHitBySpell(const ASpell& spell) const;

		protected:
			std::string	type;
	};

#endif // ATARGET_HPP
