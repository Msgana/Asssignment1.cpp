#include <string>
#include <iostream>

#include "CPU.h"


void CPU::setType(std::string newtype)
{
    type = newtype;
}

void CPU::setSpeed(int newspeed)
{
    speed = newspeed;
}

std::string CPU::getType()
{
    return type;
}
    
int CPU::getSpeed()
{
    return speed;
}

void CPU::printInfo()
{
    std::cout << type <<"," << speed <<"HZ" <<std::endl;
}
