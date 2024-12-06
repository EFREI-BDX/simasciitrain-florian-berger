//
// Created by flobe on 06/12/2024.
//

#ifndef ELECTRICLOCOMOTIVE_H
#define ELECTRICLOCOMOTIVE_H
#include "AbstractLocomotive.h"

namespace simasciitrain {
    class ElectricLocomotive : public AbstractLocomotive {
    public:
        ElectricLocomotive();
        ~ElectricLocomotive() override = default;
    };
}

#endif //ELECTRICLOCOMOTIVE_H
