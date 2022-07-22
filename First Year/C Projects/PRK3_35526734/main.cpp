//Niel Nortier 35526734
#include <iostream>

using namespace std;

int main()
{
    char cReg , cClub;
    int iParticipants,iClubMembers, i5km, i10km, i15km, iKm , i5kmPrice , i10kmPrice, i15kmPrice;
    bool bRegistering = true;

    iParticipants,iClubMembers,i5km,i10km,i15km = 0;


    while(bRegistering){
    cout << "Do you wish to register a new participant? (Y or N): " << endl;
    cin >> cReg;
    cout << "Is the participant a club member? (Y or N): " << endl;
    cin >> cClub;
    cout << "Enter distance ( 5 / 10 / 15 ): " << endl;
    cin >> iKm;

    if (toupper(cReg) == 'Y'){
        iParticipants++;
    } else{
    bRegistering = false;
    break;
    }
     if (toupper(cClub) == 'Y'){
        iClubMembers++;
     }

    switch(iKm){
        case 5:
            i5km++;
        case 10:
            i10km++;
        case 15:
            i15km++;
    }
    i5kmPrice = i5km * 65;
    i10kmPrice = i10km * 100;
    i15kmPrice = i15km * 150;

    }




    return 0;
}
