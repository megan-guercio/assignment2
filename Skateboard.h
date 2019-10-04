//Skateboard.h
//Megan Guercio

#ifndef ASSIGNMENT2_SKATEBOARD_H
#define ASSIGNMENT2_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle{

  //no extra private stuff
public:
  Skateboard();
  explicit Skateboard(string brand, string model);
  virtual ~Skateboard();
  virtual double mileageEstimate(double time);
  virtual string toString();

};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H
