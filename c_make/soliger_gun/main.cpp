#include "Soilger.h"
#include "Gun.h"
void test()
{
   cout<<"下面有请徐三少出场射击！"<<endl;
   Soilger* xusanshao=new Soilger("xusanshao");
    //Soilger xusanduo("sanduo");
    Gun* _xusanduo_gun=new Gun("ak47");
//xusanduo.addgun(_xusanduo_gun);
xusanshao->addgun(_xusanduo_gun);
 //   xusanduo.addgun(new Gun("ak47"));
  //  xusanduo.addbullerTogun(20);
  xusanshao->addbullerTogun(30);
    for (int i = 20; i > 0; i--)
    {
        //xusanduo.fire();
        xusanshao->fire();
        cout << "当前子弹数为" << i << endl;
    }
cout<<"下面有请徐三多出场射击！"<<endl;
   //Soilger* xusanshao=new Soilger("xusanshao");
    Soilger xusanduo("sanduo");
    
xusanduo.addgun(_xusanduo_gun);
//xusanshao->addgun(_xusanduo_gun);
   xusanduo.addgun(new Gun("ak47"));
   xusanduo.addbullerTogun(20);
  //xusanshao->addbullerTogun(30);
    for (int i = 20; i > 0; i--)
    {
        xusanduo.fire();
       // xusanshao->fire();
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
