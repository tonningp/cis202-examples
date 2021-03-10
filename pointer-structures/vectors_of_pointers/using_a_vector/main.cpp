#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int SIZE = 1000000;
int main()
{
    char *c = new char[SIZE];
    vector<char *> lines;

    char ch; 
    int i = 0;
    int line_number=0;
    char *line = c;
    while(cin.get(ch)) 
    {
       if(ch == '\n')
       {
          lines.push_back(line);
          line_number += 1;
          c[i] = '\0';
          line = &(c[i+1]);
       }
       else
       {
          c[i] = ch;
       }
       i++;
    }

    for(char * line : lines)
    {
      cout << line << endl;
    }

    cout << "lines=" << line_number << endl;
    cout << "characters=" << i << endl;

    return 0;
}
