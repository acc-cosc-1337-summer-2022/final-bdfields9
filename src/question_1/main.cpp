#include "question1.h"
#include <iostream>


using std::cout; 
using std::cin;
using std::endl;

int main()
{
    Payroll employees[7];
    int hours = -1;
    int hourly_pay = -1;

    for (int i=0; i<7; i++)
    {
        cout<<"Add the amount of hours worked:"<<endl;
        cin>>hours;

        while (hours <=0)
        {
            cout<<"invalid input. Enter positive numbers"<<endl;
            cout<<"Add the amount of hours worked:"<<endl;
            cin>>hours;
        }
    
        cout<<"Add hourly pay"<<endl;
        cin>>hourly_pay;

        while (hourly_pay <= 0)
        {
            cout<<"invalid input. Enter positive numbers"<<endl;
            cout<<"Add hourly pay"<<endl;
            cin>>hourly_pay;
        }
        employees[i]= Payroll(hours,hourly_pay);
    }
    //employees[i]= Payroll(hours,hourly_pay);
    hours = -1;
    hourly_pay = -1;
    return 0;
    }

    //return 0;
}