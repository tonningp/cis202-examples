/***
NOTE!!!! This is not THE solution to the assignment

The line will need to be "examined" (possibly using a function HINT HINT)
to print out a line by examining each character from the start of the pointer
until a new line character is reached

*/

#include<iostream>
#include<vector>
#include<string>


typedef const char* char_pointer;

using namespace std;


int main()
{
   string input_buffer;
   vector<char_pointer> lines;
   char ch;
   while(cin.get(ch))
   {
      if(ch == '\n')
      {
         // some action
      }
      input_buffer += ch;
   }

   char_pointer s_ptr = input_buffer.c_str();

   for(int i=0;i<input_buffer.size();i++) 
   {
      if(*s_ptr == '\n')
         lines.push_back(s_ptr+1);
      s_ptr++;
   }

   for(char_pointer line: lines)
      cout << line << endl;

   return 0;
}
