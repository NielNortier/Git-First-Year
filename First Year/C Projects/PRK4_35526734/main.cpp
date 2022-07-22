//Niel Nortier 35526734 PRK4
#include <iostream>

using namespace std;

int main()
{
    int iValues,iDelIndex;


    cout << "Enter the number of values to enter: " ;
    cin >> iValues;
    int aValues[iValues];
    cout<<"\n";

    for (int i = 0; i < iValues; i++) //Population of array
        {
            cout << "Enter the value fot the array value " << i <<": ";
            cin >> aValues[i];
        }
    cout << "\n";


    for ( int i = 0; i <iValues; i++)
        {
            cout << "Value of " << i << " is " << aValues[i] << endl;
        }


    cout<<"\n";
    cout << "Enter the index of the value you wish to remove: "<<endl;
    cin >> iDelIndex;
    cout << "\n";


    for (int i = iDelIndex;i < iValues -1; i++) //Removal of index
        {
            aValues[i] = aValues[i+1];
        }

    for(int i = 0; i<iValues-1;i++) //Output
        {
            cout << "Value of " << i << " is " << aValues[i] << endl;
        }







    return 0;
}
