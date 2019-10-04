//Bus.cpp
//Megan Guercio

#include "Bus.h"

Bus::Bus() {
    setBrand("Greyhound");
    setModel("T900");
}

Bus::Bus(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Bus::~Bus() = default;

string Bus::getEngineSize() {
    return myEngineSize;
}

void Bus::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Bus::mileageEstimate(double time) {
  double temp = time;
  temp = temp/2;
  mileage = temp;
}

string Bus::toString() {
    return "-> Bus\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
