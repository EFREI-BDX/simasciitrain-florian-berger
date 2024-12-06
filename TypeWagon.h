//
// Created by flobe on 06/12/2024.
//

#ifndef TYPEWAGON_H
#define TYPEWAGON_H
#include <string>

namespace simasciitrain {
    class TypeWagon {
    public:
        TypeWagon(const std::string &name, char symbol) : name(name), symbol(symbol) {}

        std::string getName() const { return name; }
        char getSymbol() const { return symbol; }

        static const TypeWagon PASSENGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;
    private:
        std::string name;
        char symbol;
    };
}

#endif //TYPEWAGON_H
