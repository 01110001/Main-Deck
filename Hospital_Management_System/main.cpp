#include "Hospital.h"
#include <iostream>
#include <math.h>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

using namespace std;

int main()
{
    Hospital theCompany;
    char charTmp;
    char *charTmp20 = new char[20];
    char *charTmp50 = new char[50];
    char *charTmp30 = new char[30];
    int intTmp, byPassTLeader, byPassMember, employeeType;
    double doubleTmp;
    Doctor dTemp;
    Nurse nTemp;
    Admin aTemp;
    int selection = -1, tmpID;

    cout<<"--Welcome to Kalkanli Sehir Hastanesi, please continue selection as indicated below:\n\n";
    while(selection!=7)
        {
        employeeType = 0;
        byPassTLeader= 0;
        byPassMember = 0;
        cout<<" 1| Create a team.\n-2| Search a member by ID.\n 3| List all members.\n-4| List total annual salary.\n 5| List all members of a given team.\n-6| List total annual salary of a given team.\n 7| Exit.\n\nSelection:";
        cin>>selection;
        if(selection == 1)
            {
            cout<<"Enter team ID: ";
            cin>>tmpID;
            theCompany.teamAdder(abs(tmpID));
            cout<<"Enter   the   details   of   the   team leader:\n";
            while(!byPassTLeader)
                {
                cout<<"Member ID: ";
                cin>>intTmp;
                dTemp.setId(intTmp);
                cout<<"Name: ";
                cin>>charTmp20;
                dTemp.setFName(charTmp20);
                cout<<"Surname: ";
                cin>>charTmp20;
                dTemp.setSName(charTmp20);
                cout<<"Phone: ";
                cin>>intTmp;
                dTemp.setPhone(intTmp);
                cout<<"Address: ";
                cin>>charTmp50;
                dTemp.setAddress(charTmp50);
                cout<<"Salary: ";
                cin>>intTmp;
                dTemp.setSalary(intTmp);
                cout<<"Doctor  Type[(3)Specialist\t(4)Docent\t(5)Professor]: ";
                cin>>intTmp;
                dTemp.setTitle(intTmp);
                if(!theCompany.teamLeaderSelector(dTemp))
                    cout<<"--Please select a viable employee!"<<endl;
                else
                    byPassTLeader = 1;
                }
            cout<<"--The leader of the team has been assigned successfully!\n";
            cout<<"Do you want to populate the team? [(Y)es/(N)o]: ";
            cin>>charTmp;
            if(charTmp=='Y'||charTmp=='y')
                {
                while(!byPassMember)
                    {
                    cout<<"Select type:\n 1| Doctor\n-2| Nurse\n 3| Admin\nSelection: ";
                    cin>>employeeType;
                    if(employeeType==1)
                        {
                        cout<<"Member ID: ";
                        cin>>intTmp;
                        dTemp.setId(intTmp);
                        cout<<"Name: ";
                        cin>>charTmp20;
                        dTemp.setFName(charTmp20);
                        cout<<"Surname: ";
                        cin>>charTmp20;
                        dTemp.setSName(charTmp20);
                        cout<<"Phone: ";
                        cin>>intTmp;
                        dTemp.setPhone(intTmp);
                        cout<<"Address: ";
                        cin>>charTmp50;
                        dTemp.setAddress(charTmp50);
                        cout<<"Salary: ";
                        cin>>intTmp;
                        dTemp.setSalary(intTmp);
                        cout<<"Doctor  Type[(0)Intern\t(1)Practitioner\t(2)Assistant]: ";
                        cin>>intTmp;
                        dTemp.setTitle(intTmp);
                        if(!theCompany.Adder(dTemp))
                            cout<<"--Operation unsuccessful!\n";
                        else
                            {
                            cout<<"Do you want to populate the team? [(Y)es/(N)o]: ";
                            cin>>charTmp;
                            if(charTmp=='N'||charTmp=='n')
                                byPassMember = 1;
                            }
                        }
                    else if(employeeType == 2)
                        {
                        cout<<"Member ID: ";
                        cin>>intTmp;
                        nTemp.setId(intTmp);
                        cout<<"Name: ";
                        cin>>charTmp20;
                        nTemp.setFName(charTmp20);
                        cout<<"Surname: ";
                        cin>>charTmp20;
                        nTemp.setSName(charTmp20);
                        cout<<"Phone: ";
                        cin>>intTmp;
                        nTemp.setPhone(intTmp);
                        cout<<"Address: ";
                        cin>>charTmp50;
                        nTemp.setAddress(charTmp50);
                        cout<<"Salary: ";
                        cin>>intTmp;
                        nTemp.setSalary(intTmp);
                        cout<<"Nurse  Type[(0)General\t(1)Midwife]: ";
                        cin>>intTmp;
                        nTemp.setType(intTmp);
                        cout<<"Hours over time Per Week: ";
                        cin>>doubleTmp;
                        nTemp.setOvertime(doubleTmp);
                        if(!theCompany.Adder(nTemp))
                            cout<<"--Operation unsuccessful!\n";
                        else
                            {
                            cout<<"Do you want to populate the team? [(Y)es/(N)o]: ";
                            cin>>charTmp;
                            if(charTmp=='N'||charTmp=='n')
                                byPassMember = 1;
                            }
                        }
                    else if(employeeType == 3)
                        {
                        cout<<"Member ID: ";
                        cin>>intTmp;
                        aTemp.setId(intTmp);
                        cout<<"Name: ";
                        cin>>charTmp20;
                        aTemp.setFName(charTmp20);
                        cout<<"Surname: ";
                        cin>>charTmp20;
                        aTemp.setSName(charTmp20);
                        cout<<"Phone: ";
                        cin>>intTmp;
                        aTemp.setPhone(intTmp);
                        cout<<"Address: ";
                        cin>>charTmp50;
                        aTemp.setAddress(charTmp50);
                        cout<<"Salary: ";
                        cin>>intTmp;
                        aTemp.setSalary(intTmp);
                        cout<<"Admin Type[(0)Manager\t(1)Secretary]: ";
                        cin>>intTmp;
                        aTemp.setType(intTmp);
                        cout<<"Hours worked per week: ";
                        cin>>intTmp;
                        aTemp.setHoursPW(intTmp);
                        if(!theCompany.Adder(aTemp))
                            cout<<"--Operation unsuccessful!\n";
                        else
                            {
                            cout<<"Do you want to populate the team? [(Y)es/(N)o]: ";
                            cin>>charTmp;
                            if(charTmp=='N'||charTmp=='n')
                                byPassMember = 1;
                            }
                        }
                    else
                        cout<<"--Please select a viable option!"<<endl;
                    }
                }
            }
        else if(selection == 2)
            {
            cout<<"Enter member ID: "<<endl;
            cin>>intTmp;
            intTmp = theCompany.checkEmployeeByID(intTmp);
            if(intTmp != -1)
                cout<<"\nIt is member of team number "<<intTmp<<"!\n";
            }
        else if(selection == 3)
            {
            theCompany.echoAllTeamsDetails();
            }
        else if(selection == 4)
            {
            theCompany.echoHospitalAnnual();
            }
        else if(selection == 5)
            {
            theCompany.echoCurrentTeamDetails();
            }
        else if(selection == 6)
            {
            theCompany.echoCurrentTeamSalary();
            }
        else if(selection == 7)
            {
            clear();
            cout<<"\n\n\n\n--Have a good day.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            }
        }

    return 0;
}
