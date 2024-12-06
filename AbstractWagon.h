//
// Created by flobe on 06/12/2024.
//

#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H
#include <string>
#include <iostream>

#include "TypeWagon.h"

namespace simasciitrain {
    class AbstractWagon {
    public:
        AbstractWagon(const TypeWagon &typeWagon);
        virtual ~AbstractWagon();

        virtual void print(std::ostream &os) = 0;
        char getSymbol() const;
        std::string getType() const;

    protected:
        const TypeWagon &typeWagon_;
    };

    inline std::ostream& operator<<(std::ostream &os, AbstractWagon &wagon) {
        wagon.print(os);
        return os;
    }
}

#endif //ABSTRACTWAGON_H
