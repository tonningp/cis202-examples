/*
 * File: main.cpp
 * Description:
 * Author:
 * Date:
 * Email:
*/
#include<iostream>
#include<memory>

void bad_function(int size)
{
    std::shared_ptr<int> new_array(new int[size]);
//    int *array  = new int[size];
    std::cout << "Entering bad_function() " << std::endl;
    if (size > 10) {
        return;
    }
 //   delete [] array;
    std::cout << "Leaving bad_function() " << std::endl;
}

int main()
{
    
    for (int i=0;i<100;i++)
    {
        bad_function(100);
    }

    return 0;
}
