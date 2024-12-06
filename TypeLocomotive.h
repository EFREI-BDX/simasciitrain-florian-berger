//
// Created by flobe on 06/12/2024.
//

#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H
#include <string>

namespace simasciitrain {
    class TypeLocomotive {
    public:
        TypeLocomotive(const std::string &name, char symbol) : name(name), symbol(symbol) {}

        std::string getName() const { return name; }
        char getSymbol() const { return symbol; }

        static const TypeLocomotive ELECTRIC;
        static const TypeLocomotive GASOLINE;
    private:
        std::string name;
        char symbol;
    };
}

#endif //TYPELOCOMOTIVE_H
