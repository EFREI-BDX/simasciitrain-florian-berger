//
// Created by flobe on 06/12/2024.
//

#include "Wagons.h"
#include "AbstractWagon.h"

using namespace simasciitrain;

Wagons::Wagons() {}

Wagons* Wagons::addWagon(AbstractWagon *wagon) {
    wagons_.push_back(wagon);
    return this;
}

void Wagons::print(std::ostream &os) const {
    for (size_t i = 0; i < wagons_.size(); ++i) {
        if (i > 0) {
            os << "-";
        }
        os << *wagons_[i];
    }
}
