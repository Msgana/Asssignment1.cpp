#include <iostream>
#include <string>
#include <iostream>
#ifndef CPU_H
#define CPU_H

class CPU
{
    private:
        std::string type;
        int speed;
        
    public:
        CPU()
        {
            this->type = "?";
            this->speed = 0;
        }
        
        ~CPU()
        {
            std::cout << "CPU with the type "<< type <<" and speed " <<speed <<" is being destroyed"<<std::endl;
        }
        

        void setType(std::string type);
        void setSpeed(int speed);
       
        
        std::string getType();
        int getSpeed();
        
        void printInfo();
        
        
}; //end of CPU
#endif
