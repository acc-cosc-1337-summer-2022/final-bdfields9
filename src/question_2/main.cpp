#include "question2.h"
#include <iostream>
#include<string>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
    vector<Toll>* tollVector = new vector<Toll>();
    string choice;
    int time;
    int exits;

    do
    {

        cout << "Welcome to Toll Program" << endl;
        cout << "Enter time in hour:" << endl;
        cin >> time;

        time = getValidTime(time);

        cout << "Enter exits:" << endl;
        cin >> exits;

        exits = getValidExits(exits);

        Toll tmpToll (time, exits);
        tollVector->push_back( tmpToll );

        displayToll(tollVector);

        cout << "Do you want to add another toll? (Y/N)"<<endl;
        cin >> choice;

    } while( choice == "Y" || choice == "y" );

    delete tollVector;
    return 0;
}

