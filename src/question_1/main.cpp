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

    payrollFunction(employees, hours, hourly_pay);

    cout << endl << "EMPLOYEE GROSS PAYROLL" << endl;

    printEmployees_Payroll(employees);

    return 0;
}