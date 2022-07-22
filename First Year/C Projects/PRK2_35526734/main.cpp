#include <iostream>

using namespace std;

int main()
{
    //Input
    int iChoice, iAgility, iStrength, iIntellect;
    cout << "Choose your class" << endl << "1 for Rogue" << endl << "2 for Warrior" << endl << "3 for Mage \n"<< endl ;
    cout << "Enter the value: ";
    cin >> iChoice;

    iAgility = rand() % 10;
    iStrength = rand() % 10;
    iIntellect = rand() % 10;

    cout << "\n\n" << "Your stays are: " << endl;
    cout << "Agility: " << iAgility << endl;
    cout << "Strength: " << iStrength << endl;
    cout << "Intellect: " <<  iIntellect << endl;

//Output

    switch (iChoice){
    case 1:
        cout << "\n\nYou have picked a Rogue."<< endl;
        if(iAgility < 6){
            cout << "Your Agility is too low, you need more experience." << endl;
            break;
        } else{
                cout << "Your Agility is high enough to slay the dragon.";
                break;
        }
    case 2:
        cout << "\n\nYou have picked a Warrior."<< endl;
        if(iStrength < 6){
            cout << "Your Strength is too low, you need more experience." << endl;
            break;
        } else{
                cout << "Your Strength is high enough to slay the dragon.";
                break;
        }
    case 3:
        cout << "\n\nYou have picked a Mage." << endl;
        if(iIntellect < 6){
            cout << "Your Intellect is too low, you need more experience." << endl;
            break;
        } else{
                cout << "Your Intellect is high enough to slay the dragon.";
                break;
        }


    }



    return 0;
}
