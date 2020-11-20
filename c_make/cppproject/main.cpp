#include "swap.h"

int main(int argc, char **argv)
{
    swap chage(53, 95);
    std::cout << "before swap" << std::endl;
    chage.printInfo();
    std::cout << "after  swap" << std::endl;
    chage.run();
    chage.printInfo();

    return 0;
}