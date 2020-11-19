#pragma once

class add
{
public:
    add();
   
    void plus(int a, int b);
   
    int getA()
    {
        return this->a;
        
    }
    int getB()
    {
        return this->b;
    }
private:
  
    int a;
    int b;
};