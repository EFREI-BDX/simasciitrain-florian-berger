#include <iostream>

#include "AbstractLocomotive.h"
#include "AbstractWagon.h"
#include "ElectricLocomotive.h"
#include "FreightWagon.h"
#include "GasolineLocomotive.h"
#include "PassengerWagon.h"
#include "Train.h"
#include "UtilityWagon.h"
#include "Wagons.h"

using namespace simasciitrain;

int main() {
	std::cout << "===== BERGER Florian - LUXEY Aurelien =====" << std::endl;
	AbstractWagon *freightWagon = new FreightWagon(5);
	std::cout << *freightWagon << std::endl;            //	[#####]
	AbstractWagon *passengerWagon = new PassengerWagon(5);
	std::cout << *passengerWagon << std::endl;          //	[OOOOO]
	AbstractWagon *utilityWagon = new UtilityWagon();
	std::cout << *utilityWagon << std::endl;            //	[@]

	AbstractLocomotive *electricLocomotive = new ElectricLocomotive();
	std::cout << *electricLocomotive << std::endl;        //	[E]>
	AbstractLocomotive *gasolineLocomotive = new GasolineLocomotive();
	std::cout << *gasolineLocomotive << std::endl;        //	[G]>

	Wagons wagons;
	wagons.addWagon(freightWagon)->addWagon(passengerWagon)->addWagon(utilityWagon);
	std::cout << wagons << std::endl;                    //	[#####]-[OOOOO]-[@]

	Train aTrain(&wagons, electricLocomotive);
	std::cout << aTrain << std::endl;                    //	[#####]-[OOOOO]-[@]-[E]>

	Wagons wagons2;
	wagons2.addWagon(new FreightWagon(3))
		->addWagon(new PassengerWagon(2))
		->addWagon(new UtilityWagon())
		->addWagon(new FreightWagon(1))
		->addWagon(new PassengerWagon(5))
		->addWagon(new PassengerWagon(5))
		->addWagon(new PassengerWagon(5))
		->addWagon(new PassengerWagon(5));
	Train anotherTrain(&wagons2, gasolineLocomotive);
	std::cout << anotherTrain << std::endl;                //	[###]-[OO]-[@]-[#]-[OOOOO]-[OOOOO]-[OOOOO]-[OOOOO]-[G]>

	std::cout << "===== BERGER Florian - LUXEY Aurelien =====" << std::endl;
	return 0;
}

