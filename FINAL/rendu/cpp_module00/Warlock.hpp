#ifndef WARLOCK_HPP
	#define WARLOCK_HPP

	#include <iostream>
	#include <string>
	
	class Warlock
	{
		public:
			Warlock(const std::string& newName, const std::string& newTitle);
			~Warlock();

			const std::string&	getName(void) const;
			const std::string&	getTitle(void) const;
			void				setTitle(const std::string& newTitle); 
			void				introduce(void) const;

		private:
			Warlock(void);
			Warlock(const Warlock& obj);
			Warlock&		operator=(const Warlock& rhs);

			std::string		name;
			std::string		title;
	};

#endif // WARLOCK_HPP
