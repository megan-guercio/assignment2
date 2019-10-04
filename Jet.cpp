//Jet.cpp
//Megan Guercio

#include "Jet.h"

Jet::Jet(){           //constructor
  numberOfEngines = 1;
  setBrand("Plane");
  setModel("Private");
}

Jet::Jet(string brand, string model, string fuelType, int engNum){      //init
  setBrand(brand);
  setModel(model);
  setFuelType(fuelType);
  setNumberOfEngines(engNum);
}

Jet::~Jet() = default;    //destructor

int Jet::getNumberOfEngines(){
  return numberOfEngines;
}

void Jet::setNumberOfEngines(int engNum){
    if(engNum >= 0)
        numberOfEngines = engNum;
    else
      numberOfEngines = 1;
}

double Jet::mileageEstimate(double time){
  int random = (rand()%60) + 40;    //random # between 1-60 and then add 40
  double mile = random * time;

  if(numberOfEngines > 2 && getFuelType() == "Rocket")
  {
    int numEng = numberOfEngines;
    double increase = mile * 0.055;
    mile += numEng * increase;
  }
  return mile;
}

string Jet::toString(){
  return "->Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engine: " + std::to_string(getNumbOfEngines());

}
