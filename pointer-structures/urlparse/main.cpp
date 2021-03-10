#include<iostream>
#include<cctype>
#include<vector>
#include<string>


using namespace std;


int main()
{
    string input_buffer;
    vector<string> urls;
    char ch;
    int line_number = 0;
    char *word;
    while(cin.get(ch))
    {
       if(ch == '\n')
       {
          const char *c_ptr = input_buffer.c_str(); 
          while(*c_ptr != '\0')
          {
             if(tolower(*c_ptr) == 'h'
                && tolower(*(c_ptr+1)) == 'r' 
                && tolower(*(c_ptr+2)) == 'e' 
                && tolower(*(c_ptr+3)) == 'f' 
                && tolower(*(c_ptr+4)) == '=' 
                && tolower(*(c_ptr+5)) == '"')
             {
                  string url_buffer = "";
                  c_ptr = c_ptr + 6;
                  while(*c_ptr != '"')
                  {
                     url_buffer += *c_ptr;
                     c_ptr++;
                  }
                  if(*c_ptr != '\0')
                     urls.push_back(url_buffer);
             }
             c_ptr++;

          }
          input_buffer = "";
          line_number += 1;
       }
       input_buffer += ch;
    }
    for(string url : urls)
       cout << url << endl;
    return 0;
}
