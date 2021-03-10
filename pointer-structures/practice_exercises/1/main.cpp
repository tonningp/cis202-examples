#include<iostream>


using namespace std;


int main()
{
   int a = 1;
   int b = 2;
   int* p = &a;
   cout << *p << " ";
   p = &b;
   cout << *p << endl;
   return 0;
}
