#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int SIZE = 180000;
const int LINE_NUMBERS = 300;

int main()
{
    char *c_ptr = new char[SIZE];
    char **lines = new char*[LINE_NUMBERS];
    char ch;
    int i = 0;
    int line_number = 0;
    lines[0] = c_ptr;
    while(cin.get(ch)) 
    {
       if(ch == '\n')
       {
          line_number++;
          lines[line_number] = &(c_ptr[i+1]);
       }
       c_ptr[i] = ch;
       i++;
    }
    for(int i=0;i<line_number;i++)
    {
    // think about writing a function to print one character at time
       cout << lines[i];
    }

    cout << "Lines: " << line_number << endl;
    cout << "Characters: " << i << endl;
    return 0;
}
