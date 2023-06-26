#ifndef ASPELL_HPP
    #define ASPELL_HPP

    #include <iostream>
    #include <string>
    #include "ATarget.hpp"

    class ATarget;

    class ASpell
    {
        public:
            ASpell(void);
            ASpell(const std::string& name, const std::string& effects);
            ASpell(const ASpell& obj);
            virtual ~ASpell(void);
            ASpell& operator=(const ASpell& rhs);

            const std::string   getName(void) const;
            const std::string   getEffects(void) const;
            virtual ASpell*     clone(void) = 0;
            void                launch(const ATarget& target);
        protected:
            std::string name;
            std::string effects;
    };

#endif // ASPELL_HPP
