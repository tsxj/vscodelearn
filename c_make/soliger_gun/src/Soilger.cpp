#include"Soilger.h"

Soilger::Soilger(string name)
{
    this->_name=name;
    this->_ptr_gun=nullptr;
}

void  Soilger::addgun(Gun* ptr_gun)
{
    this ->_ptr_gun=ptr_gun;
}

void  Soilger::addbullerTogun(int num)
{
    this->_ptr_gun->addbollet(num);
}
bool Soilger::fire()
{
    return(this->_ptr_gun->shoot());
    
}

Soilger::~Soilger()
{
    if(this->_ptr_gun==nullptr)
    {
        return;
    }
    delete _ptr_gun;
    _ptr_gun=nullptr;
}