//Skateboard.cpp
//Megan Guercio

#include "Skateboard.h"

using namespace std;

Skateboard::Skateboard(){}    //default, nothing to DRIVINGSIMULATOR_CAR_H

Skateboard::Skateboard(string brand, string model){
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard(){}   //destructor

double Skateboard:: mileageEstimate(double time){
  
}

string Skateboard::toString(){
  return"-> Skateboard\n" + Vehicle::toString();
}
