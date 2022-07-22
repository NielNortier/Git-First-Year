#include <iostream>
#include <math.h>

//Niel Nortier 35526734
using namespace std;

double std_dev(double*, int iNumElements);
void print_array(double*, int iNumElements);
void remove_one(double*, int iNumElements);

int main()
{
double previous_std_dev;
double new_std_dev;

double data[] = {11.2, 2.4, 3.13, 16.4, 5.8, 9.22, 4.9, 10.5, 6.5, 2.99};
int N = sizeof(data) / sizeof(double);

double* ptr = data;
print_array(ptr,N);

previous_std_dev = std_dev(ptr, N);

remove_one(ptr,N);

print_array(ptr,N-1);

new_std_dev = std_dev(ptr, N);

cout << "\nThe standard deviation of the array was: " << previous_std_dev<<endl;;
cout << "\nIt is now: "<<new_std_dev<<endl;













    return 0;
}


double std_dev(double* pointr, int N)
{
    double dTotal1;
    double dTotal2;
    double dStandDef;

    for(int i=0;i<N;i++)
        {
            dTotal1 = dTotal1+ *(pointr+i)*(*(pointr+i));
            dTotal2 = dTotal2+ *(pointr+i);

        }
        dStandDef = sqrt(dTotal1/N - (dTotal2/N)*(dTotal2/N));


        return dStandDef;

}

void print_array(double* pointr, int iNumElements)
{
     for(int i=0;i<iNumElements;i++)
   {
        cout << *(pointr+i)<<"\t";
   }


}

void remove_one(double* p, int N)
{
    int iTempIndex;
    double dRemoved;

    cout << "\nEnter an index to remove (0-9):\t";
    cin >> iTempIndex;

    for(int i=0;i<9;i++)
    {
        dRemoved = *(p+i);
    }

    cout << "Remove the value " << *(p+iTempIndex)<<endl;

   for(int i = iTempIndex; i < N; i++)
   {
       *(p+i) = *(p+(i+1));
   }
   N = N-1;




}






