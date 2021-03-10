#include<iostream>


using namespace std;


int main()
{

   int a = 15;
   int* p = &a;
   int* q = &a;
   cout << *p + *q << endl;

   return 0;
}
