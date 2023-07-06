#ifndef TARGETGENERATOR_HPP
	#define TARGETGENERATOR_HPP

	#include <string>
	#include <iostream>
	#include "ATarget.hpp"
	#include <map>

	class ATarget;

	class TargetGenerator
	{
		public:
			TargetGenerator(void);
			~TargetGenerator(void);

			void		learnTargetType(ATarget* target);
			void		forgetTargetType(const std::string& targetName);
			ATarget*	createTarget(const std::string& targetName);

		private:
			std::map< std::string, ATarget* >	targetList;
	};

#endif // TARGETGENERATOR_HPP
