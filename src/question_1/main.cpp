#include "question1.h"
#include <iostream>


using std::cout; 
using std::cin;
using std::endl;

int main()
{
    Payroll employees[7];
    int hours = 0;
    int hourly_pay = 0;
    cout << "Payroll Program"<<endl;
    
    for (int i=0; i<7; i++)
    {
        cout<<"Add the amount of hours worked for employee "<< i <<endl;
        cin>>hours;

        while (hours <=0)
        {
            cout<<"invalid input. Enter positive numbers"<<endl;
            cout<<"Add the amount of hours worked:"<<endl;
            cin >> hours;
        }
    
        cout<<"Add hourly pay"<<endl;
        cin>>hourly_pay;

        while (hourly_pay <= 0)
        {
            cout << "invalid input. Enter positive numbers"<<endl;
            cout << "Add hourly pay"<<endl;
            cin >> hourly_pay;
        }
        employees[i]= Payroll(hours,hourly_pay);
        
    }

    cout << endl << "Employee Gross Pay:" << endl;

    for (int i=0; i<7; i++)
    {
        cout << "Employee:" << i+1 << ":" << endl;
        cout << "Gross pay " << employees[i].get_gross_pay() << endl;
    }

    return 0;
}