//
// Created by flobe on 06/12/2024.
//

#ifndef TRAIN_H
#define TRAIN_H

#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"
#include <iostream>

namespace simasciitrain {
    class Train : public ITrain {
    private:
        Wagons* _wagons;
        AbstractLocomotive* _locomotive;

    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;

        void print(std::ostream& os) const override;
    };
}

#endif //TRAIN_H
