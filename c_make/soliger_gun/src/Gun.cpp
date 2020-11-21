#include"Gun.h"

void Gun::addbollet(int bolletnum )
{
 //   this->_bolletnum=bolletnum;  
 _bolletnum=bolletnum; //私有成员获得定义 在类的内部，函数可以直接掉用私有属性
}

bool  Gun::shoot()
{
    if (_bolletnum<=0)
    {
       cout<<"there  is no bullet"<<endl;
        return false;
    } 
      cout<<"shoot  succeed!"<<endl;
       _bolletnum-=1;
    return true;
}