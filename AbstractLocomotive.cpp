//
// Created by flobe on 06/12/2024.
//

#include "AbstractLocomotive.h"

using namespace simasciitrain;

AbstractLocomotive::AbstractLocomotive(const TypeLocomotive &typeLocomotive) : typeLocomotive_(typeLocomotive) {}

AbstractLocomotive::~AbstractLocomotive() {}

char AbstractLocomotive::getSymbol() const {
    return typeLocomotive_.getSymbol();
}

std::string AbstractLocomotive::getType() const {
    return typeLocomotive_.getName();
}

void AbstractLocomotive::print(std::ostream &os) const {
    os << "[" << typeLocomotive_.getSymbol() << "]";
}
