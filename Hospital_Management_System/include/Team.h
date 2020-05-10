#ifndef TEAM_H
#define TEAM_H
#include "Nurse.h"
#include "Doctor.h"
#include "Admin.h"

class Team
{
    public:
        Team();
        Team(int newTeamID);

        //setters
        void setTeamID(int newTeamID);
        int setTeamLeader(Doctor newLead);

        //getters
        int getTeamID();
        Doctor getTeamLeader(Doctor bringHere);
        void listTeamDetails();

        int addNewMember(Doctor newbie);
        int addNewMember(Nurse  newbie);
        int addNewMember(Admin  newbie);
        double calculateAnnualS();
        int findEmployeeByID(long long int comparAble, int found);
        //~Team();

    protected:

    private:
        Doctor dList[25];
        int dCount = 0;
        Nurse nList[25];
        int nCount = 0;
        Admin aList[25];
        int aCount;

        int teamID;
        int hasLeader;
        Doctor dLeader;
};

#endif // TEAM_H
