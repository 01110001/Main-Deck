#include "Team.h"
#include <iostream>
#include <string.h>

using namespace std;
Team::Team()
{
    hasLeader = 0;
    dCount = 0;
    nCount = 0;
    aCount = 0;
}
Team::Team(int newVal)
{
    teamID = newVal;
    hasLeader = 0;
}
void Team::setTeamID(int newTeamID)
{
    teamID = newTeamID;
}
int Team::setTeamLeader(Doctor newLead)
{
    char *tempChar = new char[50];
    if(hasLeader)
        cout<<"--Has already a leader!\n";
    else if((newLead.getTitle()==3)||(newLead.getTitle()==4)||(newLead.getTitle()==5))
        {
        strcpy(tempChar,newLead.getAddress());
        dLeader.setAddress(tempChar);

        strcpy(tempChar,newLead.getEMail());
        dLeader.setEMail(tempChar);

        strcpy(tempChar,newLead.getFName());
        dLeader.setFName(tempChar);

        strcpy(tempChar,newLead.getSName());
        dLeader.setSName(tempChar);

        dLeader.setId(newLead.getId());
        dLeader.setPhone(newLead.getPhone());
        dLeader.setSalary(newLead.getSalary());
        dLeader.setTitle(newLead.getTitle());
        hasLeader = 1;
        return 1;
        }

        return 0;
}

int Team::getTeamID()
{
    int temp = teamID;

    return temp;
}
Doctor Team::getTeamLeader(Doctor temp)
{
    temp = dLeader;

    return temp;
}
int Team::addNewMember(Doctor newbie)
{
    char *tempChar = new char[50];
    int population = dCount+nCount+aCount;

    if(newbie.getTitle()==4||newbie.getTitle()==5||newbie.getTitle()==6)
        cout<<"--Cannot add this member to the team due to title limitation!\n";
    else
        {
        if(population>24)
            cout<<"--Cannot add any member because capacity has been reached!\n";
        else
            {

            strcpy(tempChar,newbie.getAddress());
            dList[dCount].setAddress(tempChar);

            strcpy(tempChar,newbie.getEMail());
            dList[dCount].setEMail(tempChar);

            strcpy(tempChar,newbie.getFName());
            dList[dCount].setFName(tempChar);

            strcpy(tempChar,newbie.getSName());
            dList[dCount].setSName(tempChar);

            dList[dCount].setId(newbie.getId());
            dList[dCount].setPhone(newbie.getPhone());
            dList[dCount].setSalary(newbie.getSalary());
            dList[dCount].setTitle(newbie.getTitle());

            dCount++;
            cout<<"--Added successfully!\n";
            return 1;
            }
        }
    return 0;
}
int Team::addNewMember(Nurse  newbie)
{
    char *tempChar = new char[50];
    int population = dCount+nCount+aCount;

    if(population>24)
        cout<<"--Cannot add any member because capacity has been reached!\n";
    else
        {
        strcpy(tempChar,newbie.getAddress());
        nList[nCount].setAddress(tempChar);

        strcpy(tempChar,newbie.getEMail());
        nList[nCount].setEMail(tempChar);

        strcpy(tempChar,newbie.getFName());
        nList[nCount].setFName(tempChar);

        strcpy(tempChar,newbie.getSName());
        nList[nCount].setSName(tempChar);

        nList[nCount].setId(newbie.getId());
        nList[nCount].setPhone(newbie.getPhone());
        nList[nCount].setSalary(newbie.getSalary());
        nList[nCount].setType(newbie.getType());
        nList[nCount].setOvertime(newbie.getOvertime());


        nCount++;
        cout<<"--Added successfully!\n";
        return 1;
        }

    return 0;
}
int Team::addNewMember(Admin newbie)
{

    char *tempChar = new char[50];
    int population = dCount+nCount+aCount;

    if(population>24)
        cout<<"--Cannot add any member because capacity has been reached!\n";
    else
        {

        strcpy(tempChar,newbie.getAddress());
        aList[aCount].setAddress(tempChar);

        strcpy(tempChar,newbie.getEMail());
        aList[aCount].setEMail(tempChar);

        strcpy(tempChar,newbie.getFName());
        aList[aCount].setFName(tempChar);

        strcpy(tempChar,newbie.getSName());
        aList[aCount].setSName(tempChar);

        aList[aCount].setId(newbie.getId());
        aList[aCount].setPhone(newbie.getPhone());
        aList[aCount].setSalary(newbie.getSalary());
        aList[aCount].setType(newbie.getType());
        aList[aCount].setHoursPW(newbie.getHoursPW());

        aCount++;
        cout<<"--Added successfully!\n";
        return 1;
        }

    return 0;
}
void Team::listTeamDetails()
{
    int i;
    int population = dCount+nCount+aCount;

    if(hasLeader)
        {
        cout<<"--Team leader info:\n\n";
        dLeader.getAllInfo();
        cout<<"With title: "<< dLeader.getTitle() << endl;
        }
    if(population)
        {
        cout<<"--Members info:\n\n";
        for(i=0; i<dCount; i++)
            {
            dList[i].getAllInfo();
            cout<<"With title: "<< dList[i].getTitle() << endl;
            }
        for(i=0; i<nCount; i++)
            {
            nList[i].getAllInfo();
            cout<<"With type: "<< nList[i].getType() << endl;
            }
        for(i=0; i<aCount; i++)
            {
            aList[i].getAllInfo();
            cout<<"With type: "<< aList[i].getType() << endl;
            }
        }
    else
        cout<<"--There is no member recorded yet!"<<endl;
}
double Team::calculateAnnualS()
{
    double total = 0;
    int i;

    for(i=0; i<dCount; i++)
        total += (0.0+ dList[i].getSalary());

    for(i=0; i<nCount; i++)
        total += (0.0+ nList[i].getSalary());

    for(i=0; i<aCount; i++)
        total += (0.0+ aList[i].getSalary());

    total += (0.0+ dLeader.getSalary());

    return total;
}

int Team::findEmployeeByID(long long int comparAble, int found)
{
    int i;

    if(comparAble == dLeader.getId())
        {
        found = 1;
        dLeader.getAllInfo();
        cout<<"With title: "<< dLeader.getTitle() << endl;
        }

    if(!found)
        {
        for(i=0; i<dCount; i++)
            {
            if(comparAble == dList[i].getId())
                {
                found = 1;
                dList[i].getAllInfo();
                cout<<"With title: "<< dList[i].getTitle() << endl;
                i = dCount;
                }
            }
        }

    if(!found)
        {
        for(i=0; i<nCount; i++)
            {
            if(comparAble == nList[i].getId())
                {
                found = 1;
                nList[i].getAllInfo();
                cout<<"With type: "<< nList[i].getType() << endl;
                i = nCount;
                }
            }
        }


    if(!found)
        {
        for(i=0; i<aCount; i++)
            {
            if(comparAble == aList[i].getId())
                {
                found = 1;
                aList[i].getAllInfo();
                cout<<"With type: "<< aList[i].getType() << endl;
                i = aCount;
                }
            }
        }
    if(!found)
        {
        if(comparAble == dLeader.getId())
            {
            found = 1;
            dLeader.getAllInfo();
            cout<<"With title: "<< dList[i].getTitle() << endl;
            }
        }

        if(!found)
            cout << "--There is no matching ID in the team!" << endl;

    return found;
}
/*
Team::~Team()
{
    //dtor
}*/
