#pragma once
#include <string>
#include <iostream>
using namespace std;
class Gun
{
public:
    Gun(string type)
    {
        this->_bolletnum = 0;
        this->_type = type;
    }

    void addbollet(int bolletnum);
    bool shoot();

private:
    string _type;
    int _bolletnum;
};