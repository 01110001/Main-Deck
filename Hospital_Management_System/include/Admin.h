#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"

class Admin : public Employee
{
    public:
        Admin();
        Admin(int newType, int newHoursPerWeek);

        //setters
        void setType(int);
        void setHoursPW(int);

        //getters
        int getType();
        int getHoursPW();

        long int salary();
        //~Admin();

    protected:

    private:
        int type;
        int hoursPerWeek;
};

#endif // ADMIN_H
