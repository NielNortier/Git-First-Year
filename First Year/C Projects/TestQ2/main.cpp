#include <iostream>

using namespace std;

int sequence(int N);
void createPassword();

void replaceVowels();

char iNewPassword[8];





int main()
{
   // int PosInt;
//cout << "Enter a positive integer" << endl;
//cin >> PosInt;

//sequence(PosInt);

createPassword();
replaceVowels();



    return 0;
}

int sequence(int N)
{

    cout << N << " , ";

    while(N > 1)
    {
    if(N % 2 == 0)
    {
        N = N/2;
        cout << N << " , ";
    }else
    {



    N = (3*N)+1;

    cout << N << " , ";
    }
    }

}



void createPassword()
{
    char alpha [27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *pAlpha = alpha;




   // char newPassword[8] = {(*(pAlpha + rand() % 26)) , (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26)), (*(pAlpha + rand() % 26))};

    cout << "new Passwprd is: ";
    char newPassword[8];
    for(int i=0; i < 8; i++ )
    {
        newPassword[i] = (*(pAlpha + rand() % 26));
        cout << newPassword[i];
        iNewPassword[i] = newPassword[i];

    }









}

void replaceVowels()
{

    cout << "\n\nVowels Replaced" << endl;
    for(int i=0; i < 8; i++ )
    {
        if (iNewPassword[i] == 'A')
        {
           iNewPassword[i] = '$';
        }
         if (iNewPassword[i] == 'E')
        {
           iNewPassword[i] = '%';
        }
        if (iNewPassword[i] == 'I')
        {
           iNewPassword[i] = '@';
        }
        if (iNewPassword[i] == 'O')
        {
           iNewPassword[i] = '#';
        }
        if (iNewPassword[i] == 'U')
        {
           iNewPassword[i] = '&';
        }


        cout << iNewPassword[i];


    }
}




