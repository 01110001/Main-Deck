#include "Nurse.h"

Nurse::Nurse()
{
    //ctor
}

Nurse::Nurse(int newType, double newOvertime)
{
    type     = newType;
    overtime = newOvertime;
}

void Nurse::setType(int newVal)
{
    type = newVal;
}
void Nurse::setOvertime(double newVal)
{
    overtime = newVal;
}
int Nurse::getType()
{
    int temp = type;

    return temp;
}
double Nurse::getOvertime()
{
    double temp = overtime;

    return temp;
}
double Nurse::salary()
{
    long int oddSalary= this->getSalary();

    if(this->type==1)
        oddSalary += (52*20*this->overtime);
    else
        oddSalary += (52*30*this->overtime);

    return oddSalary;
}
/*
Nurse::~Nurse()
{
    std::cout<<"---Doctor destructor has been called!\nFor:"<<this->getFName()<<"\n";
}*/
