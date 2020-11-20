#include "Soilger.h"
#include "Gun.h"
void test()
{
    Soilger xusanduo("sanduo");
    xusanduo.addgun(new Gun("ak47"));
    xusanduo.addbullerTogun(20);
    for (int i = 20; i > 0; i--)
    {
        xusanduo.fire();
        cout << "当前子弹数为" << i << endl;
    }
}

int main(int argc, char **argv)
{

  cout<<"this is a test ....."<<endl;
  cout<<"this is  a test  second....."<<endl;
  
    test();
    return 0;
}
