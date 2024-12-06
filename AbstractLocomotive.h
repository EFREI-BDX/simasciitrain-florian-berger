//
// Created by flobe on 06/12/2024.
//

#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H
#include "TypeLocomotive.h"
#include <iostream>

namespace simasciitrain {
    class AbstractLocomotive {
    public:
        AbstractLocomotive(const TypeLocomotive &typeLocomotive);
        virtual ~AbstractLocomotive();

        void print(std::ostream &os) const;
        char getSymbol() const;
        std::string getType() const;

    protected:
        const TypeLocomotive &typeLocomotive_;
    };

    inline std::ostream& operator<<(std::ostream &os, const AbstractLocomotive &locomotive) {
        locomotive.print(os);
        return os;
    }
}

#endif //ABSTRACTLOCOMOTIVE_H
