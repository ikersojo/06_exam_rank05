#ifndef ATARGET_HPP
    #define ATARGET_HPP

    #include <iostream>
    #include <string>
    #include "ASpell.hpp"

    class ASpell;

    class ATarget
    {
        public:
            ATarget(void);
            ATarget(const std::string& newType);
            ATarget(const ATarget& obj);
            virtual ~ATarget(void);
            ATarget&    operator=(const ATarget& rhs);

            const std::string&  getType(void) const;
            virtual ATarget*    clone(void) = 0;
            void    getHitBySpell(const ASpell& spell) const;


        protected:
            std::string type;
    };

#endif // ATARGET_HPP
