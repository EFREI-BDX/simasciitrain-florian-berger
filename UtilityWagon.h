//
// Created by flobe on 06/12/2024.
//

#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class UtilityWagon : public AbstractWagon {
    public:
        UtilityWagon();
        ~UtilityWagon() override;
        void print(std::ostream &os) override;
    };
}

#endif //UTILITYWAGON_H
