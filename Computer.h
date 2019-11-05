#include <iostream>
#include <string>


#include "CPU.h"

#ifndef Computer_H
#define Computer_H

class Computer
{
    private:
        std::string brandName;
        CPU * cpu;
        int memory;
        double price;
    public:
        Computer()
        {
            this->brandName = "?";
            this->memory = 0;
            this->price = 0.0;
            
            cpu = new CPU;

        }

        ~Computer()
        {
            cpu->~CPU();
            
            std::cout << "The computer "<<Computer::getBrandName()<<" is getting destroyed"<<std::endl;
        }

        void setBrandName(std::string brandName);
        void setCPU(std::string cpuType, int cpuSpeed);
        void setMemory(int memoryAmount);
        void setPrice(double price);
       

        std::string getBrandName();
        CPU * getCPU();
        int getMemory();
        double getPrice();
        
        void printInfo();

}; //end of Computer
#endif
