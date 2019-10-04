//Jet.h
//Megan Guercio

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle{
private:
  int numberOfEngines;

public:

  Jet();
  explicit Jet(string brand, string model, string fuelType, int engNum);

  virtual ~Jet();
  int getNumberOfEngines();
  void setNumberOfEngines(int x);
  virtual double mileageEstimate(double time);
  virtual string toString();

};

#endif //DRIVINGSIMULATOR_CAR_H
