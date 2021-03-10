#include<iostream>
#include<cstring>


using namespace std;

void print(int *p,int size)
{
   for(int i=0;i<size;i++)
   {
      cout << i << " " << p[i] << endl;
   }
}

int my_strlen(char *p)
{
   int size=0;
   char *p2 = p;
   for(;*(p2++) != '\0'; size++);
   return size;
}

int main()
{
   char s[] = {"abcdefghijklmnopqrstuvwxyz"};

   char *s_ptr = s;
   
   cout << "The length of s is: " << my_strlen(s) << endl;
   for(int i=0;i<26;i++)
   {
      cout << s_ptr << endl;
      s_ptr++;
   }

   return 0;
}
