#ifndef NURSE_H
#define NURSE_H
#include "Employee.h"


class Nurse : public Employee
{
    public:
        Nurse();
        Nurse(int newType, double newOvertime);

        //setters
        void setType(int newVal);
        void setOvertime(double newVal);

        //getters
        int getType();
        double getOvertime();

        double salary();
        //~Nurse();

    protected:

    private:
        int type;
        double overtime;
};

#endif // NURSE_H
