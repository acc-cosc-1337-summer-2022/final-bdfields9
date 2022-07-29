#include "question2.h"
#include <iostream>
#include<string>
#include<memory>
#include <vector>

using std::cout; 
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
    vector<Toll>* tollVector = new vector<Toll>();
    Toll* tmpTollPtr;
    string choice;
    int time;
    int exits;

    do
    {
        cout << "Enter Time:" << endl;
        cin >> time;
        cout << "Enter exits:" << endl;
        cin >> exits;
        tmpTollPtr = new Toll(time, exits);
        tollVector->push_back( *tmpTollPtr );
        cout << "Do you want to add another toll? (Y/N)"<<endl;
        cin >> choice;
    } while( choice == "Y" || choice == "y" );

    for( size_t i=0; i<tollVector->size(); i++ )
    {
        cout << (*tollVector)[i].get_amount() << endl;
    }
    return 0;
}