#include "Hospital.h"

Hospital::Hospital()
{
    teamCount = -1;
}

void Hospital::teamAdder(int newID)
{
    teamCount++;
    teamList[teamCount].setTeamID(newID);
}
int Hospital::Adder(Doctor newbie)
{
    return teamList[teamCount].addNewMember(newbie);
}
int Hospital::Adder(Nurse newbie)
{
    return teamList[teamCount].addNewMember(newbie);
}
int Hospital::Adder(Admin newbie)
{
    return teamList[teamCount].addNewMember(newbie);
}

int Hospital::teamLeaderSelector(Doctor newbie)
{
    return (teamList[teamCount].setTeamLeader(newbie));
}

int Hospital::checkEmployeeByID(long long int comparable)
{
    int i, found=0;

    for(i=0; i<=teamCount; i++)
        {
        found = teamList[i].findEmployeeByID(comparable, found);
        if(found == 1)
            return teamList[i].getTeamID();
        }
    if(!found)
        std::cout<<"--There is no match!\n";
    return -1;
}
void Hospital::echoCurrentTeamDetails()
{
    std::cout<<"--Team ID is: "<<teamList[teamCount].getTeamID();
    teamList[teamCount].listTeamDetails();
}
void Hospital::echoCurrentTeamSalary()
{
    double total = teamList[teamCount].calculateAnnualS();

    std::cout<<"--Annual cost to operate the team is: "<<total<<" TL.\n";
}
void Hospital::echoAllTeamsDetails()
{
    int i;

    for(i=0; i<=teamCount; i++)
        teamList[i].listTeamDetails();
}
void Hospital::echoAllTeamsDetailsWID()
{
    int i;

    for(i=0; i<teamCount; i++)
        {
        std::cout<<"--Team ID is: "<<teamList[i].getTeamID();
        teamList[i].listTeamDetails();
        }
}
void Hospital::echoHospitalAnnual()
{
    double total = 0;
    int i;

    for(i=0; i<=teamCount; i++)
        total += teamList[i].calculateAnnualS();

    std::cout<<"--Annual cost to run the hospital is: "<<total<<" TL.\n";
}
void Hospital::echoTeamAnnualWID()
{
    double total = 0;
    int i;

    total = teamList[teamCount].calculateAnnualS();

    std::cout<<"--Annual cost of the team is: "<<total<<" TL.\n";
}
/*Hospital::~Hospital()
{
    //dtor
}*/
