#include"display.h"
#include<iostream>
using namespace std;
void test()
{
     display  dis;
     dis.hello();
     dis.hello();
}

int main()
{
    cout<<"this is the entry of main "<<endl;
    cout<<" hello"<<endl; 
    test();
    return 0;
}