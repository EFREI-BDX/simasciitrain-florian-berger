//
// Created by flobe on 06/12/2024.
//

#include "PassengerWagon.h"

namespace simasciitrain {

    PassengerWagon::PassengerWagon(int passengerCount) : AbstractWagon(TypeWagon::PASSENGER), passengerCount_(passengerCount) {}

    PassengerWagon::~PassengerWagon() {}

    void PassengerWagon::print(std::ostream &os) {
        os << "[";
        for (int i = 0; i < passengerCount_; ++i) {
            os << getSymbol(); // 'o' pour PASSENGER
        }
        os << "]";
    }

    int PassengerWagon::getPassengerCount() const {
        return passengerCount_;
    }

    void PassengerWagon::setPassengerCount(int count) {
        passengerCount_ = count;
    }

}