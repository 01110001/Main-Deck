#include "Admin.h"

Admin::Admin()
{
    //ctor
}
Admin::Admin(int newType, int newHoursPerWeek)
{
    type         = newType;
    hoursPerWeek = newHoursPerWeek;
}
void Admin::setType(int newType)
{
    type         = newType;
}
void Admin::setHoursPW(int newHPW)
{
    hoursPerWeek = newHPW;
}
int Admin::getType()
{
    int temp = type;

    return temp;
}
int Admin::getHoursPW()
{
    int temp = hoursPerWeek;

    return temp;
}
long int Admin::salary()
{
    long int oddSalary;

    if(type==1)
        oddSalary = (52*50*hoursPerWeek);
    else
        oddSalary = (52*20*hoursPerWeek);

    return oddSalary;

}
/*
Admin::~Admin()
{
    std::cout<<"---Doctor destructor has been called!\nFor:"<<this->getFName()<<"\n";
}*/
