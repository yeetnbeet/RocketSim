#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <math.h>

class Car
{
    private:
    int cm_wide;
    int cm_tall;
    int mass;
    int location;
    int thrust;
    double velocity;

    std::string name;

    public:

    void set_name(std::string name){this->name = name;}
    std::string get_name(){return this->name;}

    void set_cm_wide(int width){this->cm_wide=width;}
    int get_cm_wide(){return this->cm_wide;}

    void set_cm_tall(int hieght){this->cm_tall=hieght;}
    int get_cm_tall(){return this->cm_tall;}

    void set_mass(int mass){this->mass = mass;}
    int get_mass(){return this->mass;}

    void set_location(int location){this->location=location;}
    int get_location(){return this->location;}

    void set_thrust(int thrust){this->thrust = thrust;}
    int get_thrust(){return this->thrust;}

    void set_velocity(double velocity){this->velocity = velocity;}
    double get_velocity(){return this->velocity;}


    Car(std::string,int,int,int,int,int,double);
    Car();
    ~Car();

    void status_report();
    void accelerate();
    void deccelerate();
        
};