//
// Created by flobe on 06/12/2024.
//

#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H



#include "AbstractWagon.h"

namespace simasciitrain {

    class PassengerWagon : public AbstractWagon {
    public:
        PassengerWagon(int passengerCount);
        virtual ~PassengerWagon();
        virtual void print(std::ostream &os) override;

        int getPassengerCount() const;
        void setPassengerCount(int count);

    private:
        int passengerCount_;
    };

} // namespace simasciitrain

#endif

