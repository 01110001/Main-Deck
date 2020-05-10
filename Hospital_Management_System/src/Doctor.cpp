#include "Doctor.h"
#include <iostream>
using namespace std;
Doctor::Doctor()
{

}
Doctor::Doctor(int newTitle, int id, int numb, int annualS, char *name, char *sname, char *addr, char* e_mail)
{
    Title   = newTitle;
    setId     (id);
    setPhone  (numb);
    setSalary (annualS);
    setFName  (name);
    setSName  (sname);
    setAddress(addr);
    setEMail  (e_mail);
}
/*
Doctor::Doctor(const Doctor &std)
{
    char *tmp = new char[50];
    Title = std.Title;

    this->setId(std.getId());
    strcpy(tmp,std.getAddress());
    this->setAddress(tmp);
    strcpy(tmp,std.getEMail());
    this->setEMail(tmp);
    strcpy(tmp,std.getFName());
    this->setFName(tmp);
    strcpy(tmp,std.getSName());
    this->setSName(tmp);
    std::cout<< "Created and assigned successfully!\n";
}
Doctor::operator=(const Doctor &std)
{
    if (*street==NULL)
        delete []street;
    if (*city==NULL)
        delete []city;

    street = (char*)malloc(30*sizeof(char));
    city= (char*)malloc(30*sizeof(char));

    this->houseNum = std.houseNum;
    strcpy(this->street, std.street);
    strcpy(this->city, std.city);
    std::cout<< "Equalized successfully!\n";
}*/

//setter
void Doctor:: setTitle(int newTitle)
{
    this->Title = newTitle;
}
//getter
int Doctor:: getTitle()
{
    int Temp = Title;

    return Temp;
}/*
Doctor::~Doctor()
{
    std::cout<<"---Doctor destructor has been called!\nFor:"<<this->getFName()<<endl<<endl;
}*/
