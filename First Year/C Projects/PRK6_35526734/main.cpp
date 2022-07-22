#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//Niel Nortier 35526734

using namespace std;
struct horseInfo
    {
        char name[20];
        int age;
        int height;
        double time;


    };

struct horseInfo horses[4];

int main()
{

cout << "\t-=Welcome to Durban July=-"<< endl;

for(int i=0; i< 4; i++)
    {
        cout<<"==============================\nEnter Details for horse #"<<i+1 <<"\n=============================="<<endl;

        cout << "horse #"<<i+1<<" - Name: ";
        cin >> horses[i].name;
        cout << "horse #"<<i+1<<" - Age: ";
        cin >> horses[i].age;
        cout << "horse #"<<i+1<<" - Height: ";
        cin >> horses[i].height;
        cout << "horse #"<<i+1<<" - time for last race: ";
        cin >> horses[i].time;

    }

cout<<"*********************************************************************\nRoster for next race\n*********************************************************************"<<endl;
for(int i=0; i<4;i++)
    {
        cout << i+1 <<"\t\tName: "<< horses[i].name<<"\t\tAge: " <<horses[i].age<<"\t\tHeight: "<<horses[i].height<<" hands\t\tLast run: "<<horses[i].height<<endl;
    }

    double iTemp = horses[0].time;
    int iTempCounter = 0;
for(int i = 0; i < 4; i++)
    {
        if(iTemp > horses[i].time)
            {
                iTemp = horses[i].time;
                iTempCounter = i;
            }
    }

    cout << "*********************************************************************\nRace favourite: "<< horses[iTempCounter].name<<", with a time of: "<<horses[iTempCounter].time<<"\n*********************************************************************"<<endl;
    return 0;
}
