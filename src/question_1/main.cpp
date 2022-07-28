#include "question1.h"
#include <iostream>
#include <memory>


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
        while (hours <=0)
        {
            cout<<"Add the amount of hours worked:"<<endl;
            cin>>hours;
            if (hours<0)
                cout<<"invalid input. Enter positive numbers"<<endl;
        }
/*
        while (hourly_pay <= 0)
        {
            cout<<"Add hourly pay"<<endl;
            cin>>hourly_pay;
            if (hourly_pay < 0)
                cout<<"invalid input. Enter positive numbers"<<endl;
        }
*/
    employees[i]= Payroll(hours,hourly_pay);
    hours = -1;
    hourly_pay = -1;
    }

    return 0;
}