#include<iostream>


int main()
{
    double account1 = 1000.0;
    double account2 = 2000.0;

    double *current_account = &account1; // this will assign the address of account1 to 
                                         // current account
    std::cout << account1 << std::endl;
    std::cout << current_account << std::endl;                                     
    *current_account += 100.0;
    std::cout << account1 << std::endl;

    std::cout << account2 << std::endl;
    current_account = &account2;
    *current_account += 1000.0;
    std::cout << account2 << std::endl;

    return 0;
}
