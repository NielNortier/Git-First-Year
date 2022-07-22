#include <iostream>
#include <math.h>
//BMI calculator

using namespace std;

int main()
{
    int choice;
    double BMI,W,H;

    cout << ("BMI Calculator\n\n1. Weight in pounds, height in inches\n2. Weight in kilograms, height in meters\n");
    cout << "Choice?: ";
    cin >> choice;

    while((choice !=1) && (choice !=2)){
        cout << "Invalid choice! Please enter valid choice: ";
        cin >> choice;
    }

    if(choice == 1){
        cout << "\nWeight in pounds?: ";
        cin >> W;
        cout << "\nHeight in inches?: ";
        cin >> H;
        BMI = (W*703)/(H*H);

        cout << "\n\nResult..............\n\n Weight:\t" << W << " pounds" << endl;
        cout << " Height:\t" << H << "inches" << endl;
        cout << "BMI:\t" << round(BMI,1.0) << endl;

    }
    else if (choice == 2){
        cout << "\nWeight in kilograms?: ";
        cin >> W;
        cout << "Height in meters?: ";
        cin >> H;

        cout << "\n\nResult.............. Weight:\t" << W << " kilograms" << endl;
        cout << " Height:\t" << H << "meters" << endl;
        cout << " BMI:\t\t" << round(BMI) << endl;

    }
    if (BMI >= 30){
            cout << "Status:\t0bese" << endl;

    }
    else if ((BMI < 30) && (BMI>=25)){
        cout << "Status:\t0verweight" << endl;

    }
    else if ((BMI < 25) && (BMI >= 18.5)){
        cout << "Status:\tNormal" << endl;

    }
    else{
        cout << "Status:\tUnderweight" << endl;

    }

    return 0;

}

