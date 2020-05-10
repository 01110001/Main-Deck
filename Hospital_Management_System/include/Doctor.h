#ifndef DOCTOR_H
#define DOCTOR_H
#include "Employee.h"


class Doctor : public Employee
{
    public:
        Doctor();
        Doctor(int newTitle, int id, int numb, int annualS, char *name, char *sname, char *addr, char* e_mail);

        //setter
        void setTitle(int);

        //getter
        int getTitle();
        //~Doctor();

    protected:

    private:
        int Title;
};

#endif // DOCTOR_H
