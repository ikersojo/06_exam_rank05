#ifndef DUMMY_HPP
    #define DUMMY_HPP

    #include <iostream>
    #include <string>
    #include "ASpell.hpp"
    #include "ATarget.hpp"

    class ASpell;

    class Dummy : public ATarget
    {
        public:
            Dummy(void);
            Dummy(const Dummy& obj);
            virtual ~Dummy(void);
            Dummy&    operator=(const Dummy& rhs);

            ATarget*    clone(void);

    };

#endif // DUMMY_HPP
