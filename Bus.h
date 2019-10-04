//Bus.h
//Megan Guercio

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Bus : public PoweredVehicle {

public:
    Bus();

    explicit Bus(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Bus();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_CAR_H
