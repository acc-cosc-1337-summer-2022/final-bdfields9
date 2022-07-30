//h
#ifndef QUESTION1_H
#define QUESTION1_H
#include <iostream>



bool test_config();

class Payroll
{
public:
    Payroll() {work_hours = 0; work_hourly_pay = 0;}
    Payroll(int hours, int hourly_pay){work_hours = hours; work_hourly_pay = hourly_pay;}
    int work_hours;
    int work_hourly_pay;
    int get_gross_pay() const;

private:
};

int validateHours(int hours);

int validateHourly_Pay(int hourly_pay);

void printEmployees_Payroll(const Payroll *employees);

void payrollFunction(Payroll *employees, int hours, int hourly_pay);

#endif
