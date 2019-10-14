#include "race.h"
#include <conio.h>
#include <string>

//this program takes input and output a number to indicate what key is being pushed
//1 is up 2 is down and 3 is x (used to exit)


controller::controller()
{
    this->activekey=0;
}

controller::~controller()
{
    
}

int controller::getKey(controller player)
{
    switch(getch()){
           
        case 72: //up
        player.SetActiveKey(1);
        break;    
        case 80: //down
        player.SetActiveKey(2);
        break;
        case 120: //x
        player.SetActiveKey(3);
        break;
        default:
        player.SetActiveKey(0);
    }

    return player.GetActiveKey() ;

               
}



