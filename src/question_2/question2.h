//h
#ifndef QUESTION2_H
#define QUESTION2_H
#include <iostream>



bool test_config();

class Toll 
{
    public:
        Toll (int, int);
        double get_amount();
    private:
        int time;
        int exits;
};

#endif