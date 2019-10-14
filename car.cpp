#include "car.h"


Car::Car(std::string name,int width,int tall,int mass,int location,int thrust,double velocity)
{
    this->name = name;
    this->cm_wide = width;
    this->cm_tall = tall;
    this->mass = mass;
    this->location = location;
    this->thrust = thrust;
    this->velocity = velocity;
}



Car::Car()
{
    this->name = "Car1";
    this->cm_wide = 150;
    this->cm_tall = 50;
    this->mass = 20;
    this->location = 0;
    this->thrust = 1;
    this->velocity = 0;
}

Car::~Car()
{
    std::cout << "Car Destroyed";
}

void Car::status_report()
{
    std::cout
    <<"\nName= " << this->name
    <<"\nWidth= " << this->cm_wide
    <<"\nHeight= " << this->cm_tall
    <<"\ndensity= " << this->mass
    <<"\nlocation= " << this->location
    <<"\nThrust= " << this->thrust
    <<std::endl;
}

void Car::accelerate()
{
    double A = mass/thrust;
    //going to need to be updated when time is scaled
    set_velocity(get_velocity()+A);
}

void Car::deccelerate()
{
    double A = mass/thrust;
    set_velocity(get_velocity()-A);

}


    
    
    


    
    
