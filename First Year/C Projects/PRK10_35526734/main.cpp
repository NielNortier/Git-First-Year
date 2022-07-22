#include <iostream>



using namespace std;

int ReadFile(int*, int*);
void LeastSquaresLine (int *, int *, double *, double *, int);
void WriteFile (double, double);


int main()
{
    int array1[400];
    int array2[400];

    int *ptrX = array1;
    int *ptrY = array2;
    double a0,a1;
    double *ptrA0 = &a0;
    double *ptrA1 = &a1;

    int iCounter = ReadFile(array1,array2);

    LeastSquaresLine(ptrX,ptrY,ptrA0,ptrA1, iCounter);
    WriteFile(*ptrA0,*ptrA1);



    return 0;
}

int ReadFile(int* arrayX, int* arrayY)
{
    int iCounter = 0;
    int c;
    int t;

    FILE *file = fopen("data1.txt","r");

    while(fscanf(file, "%s %s\n", &c, &t) != EOF)
    {
        *(arrayX+iCounter)=c;
        *(arrayY+iCounter)=t;


    }

    fclose(file);

    return iCounter;

}

void LeastSquaresLine (int *arrayX, int *arrayY, double *a0, double *a1, int iCounter)
{
    double dTotalXY = 0;
    double dTotalX = 0;
    double dTotalY = 0;
    double dTotalX2 = 0;

    for(int i = 0; i< iCounter; i++)
    {
        dTotalXY = dTotalXY + (*(arrayX + i))*(*(arrayY + i));
        dTotalX = dTotalX + *(arrayX+i);
        dTotalY = dTotalY + *(arrayY + i);
        dTotalX2 = dTotalX2 + (*(arrayX + i))*(*(arrayX + i));
    }
    *a0 = (iCounter * dTotalXY - dTotalX * dTotalY)/(iCounter * dTotalX2 * dTotalX);
    *a1 = (dTotalY * dTotalX2 - dTotalX * dTotalXY)/(iCounter * dTotalX2 - dTotalX * dTotalX);
}


void WriteFile (double a0, double a1)
{
    cout << "The least squares line is y="<<a0<< "x+" << a1 <<endl;

    FILE *OutFile = fopen("Output.txt","w");
    fprintf(OutFile, "The least squares line is y=%fx+%f",a0,a1);
    fclose(OutFile);
}
