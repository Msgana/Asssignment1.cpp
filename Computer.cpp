#include <iostream>
#include <iomanip>

#include "Computer.h"



void Computer::setBrandName(std::string brandName)
{   this->brandName = brandName;  }

void Computer::setCPU(std::string cpuType, int cpuSpeed)
{
    cpu->setType(cpuType);
    cpu->setSpeed(cpuSpeed);
}

void Computer::setMemory(int memoryAmount)
{   memory = memoryAmount;  }

void Computer::setPrice(double price)
{   this->price = price;  }
    
    
std::string Computer::getBrandName()
{   return brandName; }
    
CPU * Computer::getCPU()
{  
    
    return cpu;  
}

int Computer::getMemory()
{   return memory;  }

double Computer::getPrice()
{   return price;   }
  
    
void Computer::printInfo()
{
    std::cout <<"\nBrandName:\t" <<Computer::getBrandName()<<std::endl;
    std::cout <<"CPU:\t\t";
    cpu->printInfo();
    std::cout<<"\n";
    //<<Computer::getCPU()<<std::endl;
    std::cout <<"Memory:\t\t" <<Computer::getMemory() << "M" <<std::endl;
    std::cout <<"Price:\t\t$" <<std::fixed<<std::setprecision(2)<<Computer::getPrice() <<std::endl;
    std::cout<<"\n"<<std::endl;

}
