#include "question2.h"
#include <vector>
#include <iostream>

using std::cout;
using std::vector;
using std::cin;
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

double Toll::get_amount() const {
    double rates[]={0.21,2.50,1.00,1.50,2.50,1.00};
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

void displayToll(const vector<Toll> *tollVector) {
    for(size_t i=0; i < tollVector->size(); i++ )
    {
        cout << "Toll "<< i+1 << ": "<< "$" << (*tollVector)[i].get_amount() << endl;
    }
}

int getValidExits(int exits) {
    while (exits < 0 )
    {
        cout<<"invalid input. Enter positive numbers"<<endl;
        cout<<"Add the number of exits:"<<endl;
        cin >> exits;
    }
    return exits;
}

int getValidTime(int time) {
    while (time < 0 || time > 12)
    {
        cout<<"invalid input. Enter positive numbers. Time cannot be greater than 12 "<<endl;
        cout<<"Enter time in hour:"<<endl;
        cin >> time;
    }
    return time;
}

