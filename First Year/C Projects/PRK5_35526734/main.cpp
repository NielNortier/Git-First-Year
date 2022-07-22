//Niel Nortier 35526734 PRK5
#include <iostream>
#include <cstring>
using namespace std;
//Variables
char arrNames2D[60][60];
char arrName[60];
int iCounter=0;
bool bFlag = false;




//Devlerations of funtions
void displayNames(char array[][60],int counter);
void lookupNames(char array[][60], int counter);



//functions

void displayNames(char array[][60],int counter)
{
    cout<<"\n\nList of Names\n\n";
    for(int i = 0; i < counter; i++)
    {
        cout << array[i] << endl;
    }

}

void lookupNames(char array[][60], int counter)
{
    cout << "\nEnter a letter: ";
    char cTemp;
    cin >> cTemp;
    cTemp = toupper(cTemp);
    cout << "\nNames starting with the letter "<< cTemp << "\n";
    for (int i = 0; i < counter; i++)
    {
        if(array[i][0] == cTemp)
        {
            cout << array[i]<<endl;
        }
    }
}




int main()
{
    while(!bFlag)
    {
        cout<<"Enter name (X to quit) : ";
        cin.getline(arrName,60);
        if(strcmp(arrName,"x")==0 || strcmp(arrName,"X")==0)

        {
            bFlag = true;

        }else
        {
            strcpy(arrNames2D[iCounter],arrName);
            iCounter++;
        }
    }

    displayNames(arrNames2D,iCounter);
    lookupNames(arrNames2D,iCounter);
    return 0;
}
