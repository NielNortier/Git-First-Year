#include <iostream>
#include <bits/stdc++.h>


//Niel Nortier 35526734
using namespace std;

int main()
{
int iArrSize,iMin,iMax;



cout << "How many elements should be sored in array? :";
cin >> iArrSize;

int arrValues[iArrSize];

for(int i = 0; i < iArrSize; i++)
    {
        cout << "Enter value of element at index: " << i << ":\t";
        cin >> arrValues[i];
    }


iMin,iMax = arrValues[0];
for(int i = 0; i < iArrSize; i++)
    {
        if(iMin > arrValues[i])
        {
            iMin = arrValues[i];
        } else if(iMax<arrValues[i])
        {
            iMax = arrValues[i];
        }
    }
cout << "Max:\t" << iMax << endl;;
cout << "Min:\t"<<iMin<<endl;
cout << "Range:\t"<< (iMax - iMin)<<endl;


// Part 2
cout << "How many elements should be sored in array? :";
cin >> iArrSize;

int iArrReverse;
int arrReverse[iArrSize];

iArrReverse = iArrSize;

for(int i = 0; i < iArrSize; i++)
    {
        cout << "Enter value of element at index: " << i << ":\t";
        cin >> arrValues[i];
        arrReverse[iArrReverse-1] = arrValues[i];
        iArrReverse--;

    }
for(int i = 0; i < iArrSize; i++)
    {
        cout << arrReverse[i]<<"\t";
    }
//part 3
cout << "How many elements should be sored in array? :";
cin >> iArrSize;

for(int i = 0; i < iArrSize; i++)
    {
        cout << "Enter value of element at index: " << i << ":\t";
        cin >> arrValues[i];
    }
cout << "\n\nSorted array: "<<endl;
sort(arrValues, arrValues+iArrSize);
for(int i = 0; i < iArrSize; i++)
    {
        cout << arrValues[i]<<"\t";
    }
    return 0;
}
