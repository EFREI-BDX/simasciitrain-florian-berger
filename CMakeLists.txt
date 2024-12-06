cmake_minimum_required(VERSION 3.29)
project(simasciitrain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain
        main.cpp
        TypeWagon.cpp
        AbstractWagon.cpp
        FreightWagon.cpp
        PassengerWagon.cpp
        UtilityWagon.cpp
        AbstractLocomotive.cpp
        ElectricLocomotive.cpp
        GasolineLocomotive.cpp
        TypeLocomotive.cpp
        Wagons.cpp
        Train.cpp
)