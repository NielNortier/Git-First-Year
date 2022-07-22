#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//Niel Nortier Test 3 35526734

int readCodes(char *);
void displayCodes(char*, int);
void displayLocations(char*, int);
void checkStock(char*, int);

int main()
{

  // Create an array to store data, assign a pointer
  char arrCodes[200];
  char *pCodes = arrCodes;
  // Read data into the array, pCodes now contains a single string with the file contents
  // Counter now contains the number of elements in the array
  int counter = readCodes(pCodes);

  displayCodes(pCodes,counter);
  displayLocations(pCodes,counter);
  checkStock(pCodes,counter);


  cout << "Done!" << endl;
  return 0;
}

int readCodes(char *pCodes)
{
  int k = 0;
  FILE *readfile = fopen("codes.txt", "r");
  if (readfile == NULL)
  {
    printf("Error reading from file\n");
  }
  else
  {
    printf("Reading from file\n");
    char c;
    while (fscanf(readfile, "%c", &c) != EOF)
    {
      *(pCodes + k) = c;
      k++;

    }
    fclose(readfile);
  }
  return k - 1;
}

void displayCodes(char *array, int iCount)
{
    cout << "\nList of Codes"<< endl;
    for(int i =0; i< iCount;i++)
    {
        printf("%c", *(array+i));

    }
}

void displayLocations(char *array, int iCounter)
{
    cout<<"\n\nLocation of items\n";
    cout<<"Item Nr\tSRoom\tSection\tShelf"<<endl;    string sItem = "";

    for(int i = 0; i< iCounter; i++)
    {
        if (*(array+i) == '_')
            {




               cout <<  *(array + i +1) << *(array + i +2)<<"\t";
            }
         if (*(array+i) == ':')
            {




               cout <<  *(array + i +1) <<"\t"<< *(array + i +2)<<"\t"<<*(array + i +3)<<"\t" << endl;
            }

    }
}

void checkStock(char *array, int iCount)
{
    int iMin = 100;
    int iTotal = 0;
    int iStock = 0;

    cout << "\nList of Stock to order\nItem Nr\tIn stock\tTo order\n";


    for(int i = 0; i<iCount; i++)
    {
        if (*(array+i) == '_')
        {
            char cStock[4] = {*(array + i + 8), *(array + i + 9), *(array + i + 10)};
            iStock = atoi(cStock);
            if(iStock < 100)
            {
                cout << *(array + i +1) << *(array + i +2) << "\t" << iStock << "\t" << 100-iStock<<endl;
                iTotal += 100-iStock;
            }


        }
    }
                cout << "Total number of items to order: " <<  iTotal;
}



