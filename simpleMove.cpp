/*
    Simple Example for writing to Dynamixel MX-28AT servos
*/

#include<iostream>
#include "JetsonMX28.h"

#define SEC 1000000
#define MSEC 1000
#define ID 1

using namespace std;

int main()
{
    JetsonMX28 myServo;
    
    myServo.begin();
    
    for(int i = 0; i < 5; i ++)
    {
        myServo.move(ID,0);
        usleep(2*SEC);
        
        myServo.move(ID,1000);
        usleep(2*SEC);
    }
    
    myServo.disconnect();
    return 0;
}

