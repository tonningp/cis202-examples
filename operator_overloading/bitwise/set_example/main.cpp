#include<iostream>
//#include "set.h"

int main()
{
    Set a;
    a.add(1);
    a.add(2);
    a.add(3);
    Set b;
    b.add(3);
    b.add(5);
    b.add(6);

    std::cout << (a | b) << std::endl;
    // output - {1,2,3,5,6}
    std::cout << (a & b) << std::endl;
    // output - {3}

   return 0;
}
