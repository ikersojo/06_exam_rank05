#ifndef ATARGET_HPP
	#define ATARGET_HPP

	#include <string>
	#include <iostream>
	#include "ASpell.hpp"

	class ASpell;

	class ATarget
	{
		public:
			ATarget(void);
			ATarget(const std::string& newType);
			ATarget(const ATarget& obj);
			ATarget&	operator=(const ATarget& rhs);
			virtual ~ATarget(void);

			const std::string&	getType(void) const;
			virtual ATarget*	clone(void) const = 0;

			void	getHitBySpell(const ASpell& spell) const;
		protected:
			std::string	type;
	};


#endif // ATARGET_HPP
