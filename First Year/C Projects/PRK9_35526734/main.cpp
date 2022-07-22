#include <iostream>

using namespace std;

#define MAX_CHAR 400

//Niel Nortier 35526734

int idRead(char*);
void display(char*, int);
void display_birthday(char*, int);

int main()
{
    char idNum[MAX_CHAR];
    int count = idRead(idNum);
    display(idNum, count);
    display_birthday(idNum, count);


    return 0;
}


int idRead(char* idNum)
{
    FILE *file = fopen("idnumbers.txt", "r");
    cout << "Printing from file" << endl;
    char c;
    int iCounter = 0;
    for (int i = 0; i<MAX_CHAR; i++)
    {
        if ((fscanf(file,"%c", &c)) == EOF)
        {
            break;
        }else
        {
            *(idNum +i) = c;
            iCounter++;
        }

    }

   return iCounter;

}

void display(char* idNum, int iCounter)
{
    for (int i = 0;i<iCounter;i++)
    {
        printf("%c", *(idNum + i));
    }

}


void display_birthday(char* idNum , int counter)
{
    for(int i = 0; i < counter; i++)
    {
       if (*(idNum + i)=='_')
       {
           char cYear[3] = {*(idNum+i+1),*(idNum+i+2)};
           int iYear = (int)((*(idNum+i+1)-'0')*10+(*(idNum+i+1)-'0'));
           if(iYear >= 21)
           {
               iYear = iYear + 1900;
           }else{
            iYear = iYear + 2000;
           }

           char cMonth[3] = {*(idNum+i+3),*(idNum+i+4)};
           char cDay[3] = {*(idNum+i+5),*(idNum+i+6)};



           cout << "\nDateBorn: " << iYear << "/" << cMonth << "/" << cDay;

       }
    }
}
