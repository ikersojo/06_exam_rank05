#ifndef FWOOSH_HPP
    #define FWOOSH_HPP

    #include <iostream>
    #include <string>
    #include "ATarget.hpp"
    #include "ASpell.hpp"

    class ATarget;

    class Fwoosh : public ASpell
    {
        public:
            Fwoosh(void);
            Fwoosh(const Fwoosh& obj);
            virtual ~Fwoosh(void);
            Fwoosh& operator=(const Fwoosh& rhs);

            ASpell*     clone(void);
    };

#endif // FWOOSH_HPP
