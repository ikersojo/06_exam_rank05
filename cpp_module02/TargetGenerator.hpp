#ifndef TARGETGENERATOR_HPP
	#define TARGETGENERATOR_HPP

	#include <iostream>
	#include <string>
	#include "ASpell.hpp"
	#include <map>

	class ASpell;

	class TargetGenerator
	{
		public:
			TargetGenerator(void);
			~TargetGenerator(void);

			void		learnTargetType(ATarget* target);
			void		forgetTargetType(const std::string& type);
			ATarget*	createTarget(const std::string& type);

		private:
			TargetGenerator(const TargetGenerator& obj);
			TargetGenerator&	operator=(const TargetGenerator& rhs);

			std::map<std::string, ATarget*>	targetList;

	};

#endif // TARGETGENERATOR_HPP
