#include <iostream>
#include <math.h>

using namespace std;

double standard(double* p);
void fdisplay(double*,int);
void print_array(double*,int);
void remove_one(double*,int);
void fdisplay2(double*,int);



int main()
{

    double previous_std_dev;
    double new_std_dev;

    double data[] = {11.2, 2.4, 3.13, 16.4, 5.8, 9.22, 4.9, 10.5, 6.5, 2.99};
    double *ptr =data;
    int N = sizeof(data) / sizeof(double);


    print_array(ptr,N);
    fdisplay(ptr,N);
    remove_one(ptr,N);

    fdisplay2(ptr,N);




    return 0;
}


void fdisplay(double* p,int N)
{
    double sum1=0;
    double sum2=0;
    double standard;




    for(int j=0;j<N;j++)
    {
        sum1=sum1+ *(p+j)*(*(p+j));
        sum2=sum2+ *(p+j);
    }
    standard=sqrt(sum1/N - (sum2/N)*(sum2/N));
    cout << "\nStandard deviation = %.4f"<< standard;


}

void print_array(double* p,int N)
{
   for(int i=0;i<N;i++)
   {
        cout << " %.2f " << *(p+i);
   }
}

void remove_one(double* p,int N)
{
    int rem=0;
    cout << "\nEnter an index to remove(0-9):";
    cin >> rem;

    cout << "Remove the value '%.2f'. \n"<<*(p+rem);

    for(int i=rem;i<N;i++)
    {
        *(p+i)=*(p+i+1);
    }

    for(int i=0;i<9;i++)
    {
        cout << "%.2f "<<*(p+i);
    }

}

void fdisplay2(double* p, int N)
{
    double sum1=0;
    double sum2=0;
    double standard2;



    for(int j=0;j<N-1;j++)
    {
        sum1=sum1+ *(p+j)*(*(p+j));
        sum2=sum2+ *(p+j);
    }
    standard2=sqrt(sum1/(N-1) - (sum2/(N-1))*(sum2/(N-1)));

    cout << "\nNew standard deviation: %.4f"<<standard2;


}
