#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee
{
    public:
        Employee();
        Employee(int id, int numb, int annualS, char *name, char *sname, char *addr, char* e_mail);

        //setters
        void setId(long long int newID);
        void setPhone(long long int newPhone);
        void setSalary(double newSalary);
        void setFName(char* firstname);
        void setSName(char* surname);
        void setAddress(char* newAddress);
        void setEMail(char* newEMail);

        //getters
        long long int getId();
        long long int getPhone();
        double getSalary();
        const char* getFName() const;
        const char* getSName() const;
        const char* getAddress() const;
        const char* getEMail() const;

        void getAllInfo();
        //~Employee();

    protected:

    private:
        long long int iD;
        long long int phone;
        double salary;
        char *fName;
        char *sName;
        char *address;
        char *email;
};

#endif // EMPLOYEE_H
