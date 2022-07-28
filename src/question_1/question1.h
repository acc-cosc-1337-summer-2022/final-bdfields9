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
    int get_gross_pay();

    private:
};
#endif