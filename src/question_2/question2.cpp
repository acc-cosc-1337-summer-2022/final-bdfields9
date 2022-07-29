#include "question2.h"
#include <iostream>

using std::cout;
using std::endl;

bool test_config()
{
    return true;
}

Toll::Toll(int time, int exits)
{
    this -> time = time;
    this -> exits = exits;
}

double Toll::get_amount()
{
    double rates[]={0.25,2.50,1.00,1.50,2.50,1.00};
    double rate_charge;
    if (time < 7)
    {
        rate_charge = rates[0];
    }
    else if (time < 9)
    {
        rate_charge = rates[1];
    }
    else if (time < 12)
    {
        rate_charge = rates[2];
    }
    else if (time < 15)
    {
        rate_charge = rates[3];
    }
    else if (time < 18)
    {
        rate_charge = rates[4];
    }
    else
    {
        rate_charge = rates[5];
    }

    return rate_charge*exits;

}

