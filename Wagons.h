//
// Created by flobe on 06/12/2024.
//

#ifndef WAGON_H
#define WAGON_H

#include "AbstractWagon.h"
#include <ostream>
#include <vector>

namespace simasciitrain {
    class Wagons {
    public:
        Wagons();
        ~Wagons() = default;

        Wagons* addWagon(AbstractWagon *wagon);
        void print(std::ostream &os) const;
    private:
        std::vector<AbstractWagon*> wagons_;
    };

    inline std::ostream& operator<<(std::ostream &os, Wagons &w) {
        w.print(os);
        return os;
    }
}

#endif //WAGON_H
