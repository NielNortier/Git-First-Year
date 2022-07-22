#include <iostream>

using namespace std;



struct Employee
{
    char Surname[20];
    int hours;
    bool Manager;
};

int readFromFile(char*);
void display(char *array, int count);

int main()
{
    struct Employee arrEmp[30];

    char arrayNames[100];

    readFromFile( arrayNames);
    display(arrayNames, 100);


    return 0;
}

int readFromFile(char* arr)
{

    cout <<" Reading fromm file "<< endl;
    FILE *fHours = fopen("hours.txt","r");

    if(fHours==NULL)
    {
        cout << "No file found" << endl;
        return 0;
    }

    char cIndex;
    string sName;




    fscanf(fHours,"c",&cIndex);

    for (int i = 0; i < 1000; i++)
    {
        if(fscanf(fHours,"c",&cIndex) == EOF)
        {
            break;
        }
        else{
        *(arr + i) = cIndex;
        //count++


        }

    }
    fclose(fHours);

}

void display(char *array, int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("%c", *(array + i));
  }
}
