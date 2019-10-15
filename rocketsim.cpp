#include <iostream>
#include "race.h"
#include <conio.h>
#include <string>
#include "car.h"
#include <ctime>

int main()
{
Car Rocket;
controller player;

//double lastTime=time(nullptr);
bool flag = true;
while(flag)
{
    //double current = time(nullptr);
    //double elapsed = current - lastTime;

    int keycall = player.getKey(player);
    
    if(keycall == 1)
    {
        Rocket.accelerate();
    }
    if(keycall == 2)
    {
        Rocket.deccelerate();
    }
    if(keycall == 3)
    {
        std::cout << "terminated";
        
    }
    
    double currentV = Rocket.get_velocity() + Rocket.get_thrust()/Rocket.get_mass();
    
    Rocket.set_location(
        Rocket.get_location()+currentV // add past location to current location
    );

    std::cout << Rocket.get_location() << "|" << Rocket.get_velocity()
        << std::endl;


    }

    return 0;


}


