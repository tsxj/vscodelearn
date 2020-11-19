#include <stdio.h>
#include "add.h"
#include<iostream>
using namespace std;
int main()
{

    cout<<"this is a test string"<<endl;
    add *ad;

    ad->plus(9, 9);

    ad = nullptr;

    delete ad;
  
    return 0;
}
