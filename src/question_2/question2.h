//h
#ifndef QUESTION2_H
#define QUESTION2_H
#include <iostream>
#include <vector>
bool test_config();

void tolls(std::vector<int>tolls);

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