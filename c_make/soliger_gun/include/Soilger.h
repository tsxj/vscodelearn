#pragma once
#include "Gun.h"
#include <string>
using namespace std;

class Soilger
{
public:
    Soilger(string name);
    ~Soilger();
    void addbullerTogun(int num);
    bool fire();
void addgun(Gun* ptr_gun);
private:
    string _name;
    Gun *_ptr_gun;
};
