#include<iostream>


using namespace std;


int main()
{
              //0 1 2 3 4
   int ar[5] = {1,2,3,4,5};
   int *p = ar;

   cout << *(p+5) << endl;
   cout << ar[5] << endl;

   return 0;
}
