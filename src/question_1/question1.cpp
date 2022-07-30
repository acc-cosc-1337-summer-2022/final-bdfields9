#include "question1.h"
#include <iostream>

bool test_config()
{
    return true;
}
using std :: endl;
using std :: cin;
using std :: cout;

void payrollFunction(Payroll *employees, int hours, int hourly_pay) {
    for (int i = 0; i < 7; i++) {
        cout << "Add the amount of hours worked for employee " << i + 1 << endl;
        cin >> hours;

        hours = validateHours(hours);

        cout << "Add hourly pay" << endl;
        cin >> hourly_pay;

        hourly_pay = validateHourly_Pay(hourly_pay);
        employees[i] = Payroll(hours, hourly_pay);

    }
}

int Payroll::get_gross_pay() const {
    return work_hours * work_hourly_pay;
}

void printEmployees_Payroll(const Payroll *employees) {
    for (int i = 0 ; i < 7; i++)
    {
        cout << "Employee " << i+1 << ":" << endl;
        cout << "Gross pay: " << "$" << employees[i].get_gross_pay() << endl;
    }
}

int validateHourly_Pay(int hourly_pay) {
    while (hourly_pay < 0)
    {
        cout << "invalid input. Enter positive numbers"<<endl;
        cout << "Add hourly pay"<<endl;
        cin >> hourly_pay;
    }
    return hourly_pay;
}

int validateHours(int hours) {
    while (hours < 0)
    {
        cout<<"invalid input. Enter positive numbers"<<endl;
        cout<<"Add the amount of hours worked:"<<endl;
        cin >> hours;
    }
    return hours;
}