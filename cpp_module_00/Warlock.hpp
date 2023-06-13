#ifndef WARLOCK_HPP
	#define WARLOCK_HPP

	#include <string>
	#include <iostream>

	class Warlock
	{
		public:
			Warlock(const std::string& name, const std::string& title);
			~Warlock();

			const std::string&	getName(void) const;
			const std::string&	getTitle(void) const;
			void				setTitle(const std::string& newTitle);
			void				introduce() const;

		private:
			Warlock(const Warlock& obj);
			Warlock();
			Warlock&	operator=(const Warlock& rhs);
			std::string	name;
			std::string	title;
	};

#endif // WARLOCK_HPP
