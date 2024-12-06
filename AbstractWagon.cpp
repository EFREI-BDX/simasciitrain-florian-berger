//
// Created by flobe on 06/12/2024.
//

#include "AbstractWagon.h"

using namespace simasciitrain;

AbstractWagon::AbstractWagon(const TypeWagon &typeWagon) : typeWagon_(typeWagon) {}

AbstractWagon::~AbstractWagon() {}

char AbstractWagon::getSymbol() const {
    return typeWagon_.getSymbol();
}

std::string AbstractWagon::getType() const {
    return typeWagon_.getName();
}