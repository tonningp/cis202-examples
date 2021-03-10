#include<iostream>
#include<string>
#include<cstring>

using namespace std;


void print_string(const char* s)
{
   while(*s != '\n')
   {
      cout << *s;
      s++;
   }
   cout << endl;

}

int main()
{
    string input;
    char ch;

    int lines = 0;
// **** INPUT AND STORAGE *****
    while(cin.get(ch))
    {
       if(ch == '\n')
          lines++;
       input += ch;   // this is the STORAGE part
    }
    const char *c = input.c_str();
    const char **line_array = new const char*[lines];
    for(int i=0;i<lines;i++)
    {
       line_array[i] = c;
       while(*c != '\n')
          c++;
       c++;
    }
   
    for(int i=lines-1;i>=0;i--)
      print_string(line_array[i]);

    return 0;
}
