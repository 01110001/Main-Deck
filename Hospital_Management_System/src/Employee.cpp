#include "Employee.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

//constructors
Employee:: Employee()
{
    /*
    fName   = (char*)malloc(20*sizeof(char));
    sName   = (char*)malloc(20*sizeof(char));
    address = (char*)malloc(50*sizeof(char));
    email   = (char*)malloc(30*sizeof(char));
    */
    fName   = new char[20];
    sName   = new char[20];
    address = new char[50];
    email   = new char[30];
}
Employee:: Employee(int id, int numb, int annualS, char *name, char *sname, char *addr, char* e_mail)
{/*
    fName   = (char*)malloc(20*sizeof(char));
    sName   = (char*)malloc(20*sizeof(char));
    address = (char*)malloc(50*sizeof(char));
    email   = (char*)malloc(30*sizeof(char));
*/
    fName   = new char[20];
    sName   = new char[20];
    address = new char[50];
    email   = new char[30];
/*
    iD = id;
    phone = numb;
    salary = annualS;
    strcpy(fName, name);
    strcpy(sName, sname);
    strcpy(address, addr);
    strcpy(email, e_mail);
*/
    setId(id);
    setPhone(numb);
    setSalary(annualS);
    setFName(name);
    setSName(sname);
    setAddress(addr);
    setEMail(e_mail);
}

//setters
void Employee:: setId(long long int newiD)
{
    iD = newiD;
}
void Employee:: setPhone(long long int newPhone)
{
    phone  = newPhone;
}
void Employee:: setSalary(double newSalary)
{
    salary = newSalary;
}
void Employee:: setFName(char* firstname)
{
    strcpy(fName, firstname);
}
void Employee:: setSName(char* surname)
{
    strcpy(sName, surname);
}
void Employee:: setAddress(char* newAddress)
{
    strcpy(address, newAddress);
}
void Employee:: setEMail(char* newEMail)
{
    strcpy(email, newEMail);
}

//getters
long long int Employee:: getId()
{
    long int temp = iD;

    return temp;
}
long long int Employee::  getPhone()
{
    long int temp = phone;

    return temp;
}
double Employee::  getSalary()
{
    double temp = salary;

    return temp;
}
const char* Employee::  getFName() const
{
    return fName;
}
const char* Employee::  getSName() const
{
    return sName;
}
const char* Employee::  getAddress() const
{
    return address;
}
const char* Employee::  getEMail() const
{
    return email;
}
void Employee:: getAllInfo()
{
    cout<<endl<<"Name: "<<this->getFName()<<"\n-Surname: "<<this->getSName()<<"\nPhone Numb: "<<this->getPhone()<<"\n-ID: "<<this->getId()<<"\nSalary: "<<this->getSalary()<<"\n-E-mail: "<<this->getEMail()<<"\nAddress: "<<this->getAddress()<<endl<<endl;
}
/*
Employee::~Employee()
{
    std::cout<<"---Employee destructor has been called!\nFor: "<<this->getFName()<<endl<<endl;
    delete fName;
    delete sName;
    delete address;
    delete email;
}*/
