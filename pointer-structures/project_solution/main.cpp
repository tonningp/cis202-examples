#include<iostream>
#include<string>
#include<vector>


using namespace std;

int read_chars(string &s)
{
   char ch;
   int linecount = 0;
   while(cin.get(ch))
   {
      s += ch;
      if(ch == '\n')
         linecount++;
   }
   return linecount;
}

void store_lines(const string &input_buffer,const char** lines)
{
   const char *current_line = input_buffer.c_str();
   int current_line_count = 0;
   while(*current_line != '\0')
   {
      lines[current_line_count] = current_line;
      while(*current_line != '\n')
         current_line++;
      if(*current_line == '\0')
         break;
      current_line++;
      current_line_count++;
   }
   
}


void print_line(const char *l)
{
   while(*l != '\n')
   {
      cout << *l;
      l++;
   }
   cout << endl;
}

void print_lines(const char** lines, int size)
{
   for(int i=size-1;i>=0;i--)
   {
      print_line(lines[i]);
   }

}

int  main()
{
   string input_buffer;
   int line_count = read_chars(input_buffer);
   const char** lines = new const char*[line_count];
   store_lines(input_buffer,lines);
   print_lines(lines,line_count);

   return 0;
}
