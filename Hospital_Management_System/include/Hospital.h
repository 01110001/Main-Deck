#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Team.h"

class Hospital
{
    public:
        Hospital();

        void teamAdder(int newID);
        int Adder(Doctor newbie);
        int Adder(Nurse newbie);
        int Adder(Admin newbie);
        int teamLeaderSelector(Doctor newbie);
        int checkEmployeeByID(long long int comparable);
        void echoCurrentTeamDetails();
        void echoCurrentTeamSalary();
        void echoAllTeamsDetails();
        void echoAllTeamsDetailsWID();
        void echoHospitalAnnual();
        void echoTeamAnnualWID();
        //~Hospital();

    protected:

    private:
        Team teamList[100];
        int teamCount;
};

#endif // HOSPITAL_H
