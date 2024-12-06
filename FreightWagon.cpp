//
// Created by flobe on 06/12/2024.
//

#include "FreightWagon.h"

using namespace simasciitrain;

FreightWagon::FreightWagon(const int freightCount) : AbstractWagon(TypeWagon::FREIGHT), freightCount_(freightCount) {}

FreightWagon::~FreightWagon() {}

void FreightWagon::print(std::ostream &os) {
    os << "[";
    for (int i = 0; i < freightCount_; ++i) {
        os << getSymbol();
    }
    os << "]";
}

int FreightWagon::getFreightCount() const {
    return freightCount_;
}

void FreightWagon::setFreightCount(const int freightCount) {
    freightCount_ = freightCount;
}
