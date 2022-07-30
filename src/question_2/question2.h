//h
#ifndef QUESTION2_H
#define QUESTION2_H
#include <iostream>
#include <vector>
bool test_config();

void tolls(std::vector<double>tolls);

class Toll
{
public:
    Toll (int time, int exits);
    double get_amount() const;
private:
    int time;
    int exits;
};

int getValidTime(int time);

int getValidExits(int exits);

void displayToll(const std::vector<Toll> *tollVector);

#endif