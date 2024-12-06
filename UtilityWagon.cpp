//
// Created by flobe on 06/12/2024.
//

#include "UtilityWagon.h"

namespace simasciitrain {
    UtilityWagon::UtilityWagon() : AbstractWagon(TypeWagon::UTILITY) {}
    UtilityWagon::~UtilityWagon() {}

    void UtilityWagon::print(std::ostream &os) {
        os << "[" << getSymbol() << "]";
    }
}