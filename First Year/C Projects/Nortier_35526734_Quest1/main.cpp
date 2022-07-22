#include <iostream>

//Niel Nortier Q1 35526734

using namespace std;

int main()
{
double iAmount = 0;

    string cUsePoints;
    double dDiscount = 0;
    int iLoyalty;
    int iLoyaltyTotal = 0;
    double iLoyalty_Value = 0;
    int iDiscountCounter =0;
while(iAmount >= 0)
{

    iLoyalty_Value = 0;
    cout << "Enter puchases amount (-1 to quit input): ";
    cin >> iAmount;
    if(iAmount == -1)
    {
        break;
    }

    iDiscountCounter++;

    if(iAmount <= 500)
    {
        iLoyalty = iAmount/50;
    }

    if(iAmount > 500)
    {
        iLoyalty = ((iAmount - 500) / 25) +10;
    }
        iLoyaltyTotal += iLoyalty;

    for(int i = 0; i < iLoyaltyTotal; i++)
    {
        if(i <= 30)
        {
            iLoyalty_Value = iLoyalty_Value + 0.25;
        }else if(i >= 30 && i <= 50)
        {
           iLoyalty_Value = iLoyalty_Value + 0.40;
        }else
        {
            iLoyalty_Value = iLoyalty_Value + 0.60;
        }
    }
    cout << "\nPoints earned with this transaction: " << iLoyalty << endl;
    cout << "Total Points: " << iLoyaltyTotal << endl;


    cout << "Loyalty Point Value is: " << iLoyalty_Value << endl;



    if (iLoyaltyTotal >= 50 && iDiscountCounter <= 3)
    {
        dDiscount =  (iAmount*0.5);

        cout << "Discount Amount: " << dDiscount << endl;
    }

    if(iLoyaltyTotal >= 50)
    {
        cout << "You have reached the maximum point limit" << endl;
        cout << "You will recieve the value of your points with this transaction" << endl;
        iLoyaltyTotal = 0;
    } else
    {
       cout << "Do you want to use your points (Y/N) ";
    cin >> cUsePoints;

    if ((cUsePoints == "Y") ||  (cUsePoints == "y"))
    {
      iLoyaltyTotal = 0;
    }
    }
    cout << "-------------------------------------" << endl;
}


    return 0;
}
