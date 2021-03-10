/*
 * File: main.cpp
 * Description:
 * Author:
 * Date:
 * Email:
*/
#include<iostream>
#include "rational.h"

int main()
{
    Rational r1(3,7);
    Rational r2(5,7);
    std::cout << r1 << " + " << r2 << " = " << (r1+r2)<< std::endl;
    std::cout << "The negative of " << r1 << " is: " << -r1 << std::endl;
    std::cout << r1 << " - " << r2 << " = " << (r1-r2)<< std::endl; // -2 / 7
    return 0;
}
