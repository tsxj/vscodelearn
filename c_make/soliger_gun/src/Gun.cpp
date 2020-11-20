#include"Gun.h"

void Gun::addbollet(int bolletnum )
{
    this->_bolletnum=bolletnum;

}

bool  Gun::shoot()
{
    if (this->_bolletnum<=0)
    {
        cout<<"there  is no bullet"<<endl;
        return false;
    } 
      cout<<"shoot  succeed!"<<endl;
    this->_bolletnum-=1;
    return true;
}