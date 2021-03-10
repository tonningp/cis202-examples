#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;
/*
   tmp_ptr = dest
   while *src != '\0'
      *tmp_ptr = *src
       tmp_ptr++
       src++
   *tmp_ptr = '\0'

   return dest

*/
char * my_strcpy(char *dest,const char *src)
{
   /*
   char *tmp_ptr = dest;
   while(*src != '\0')
   {
      *tmp_ptr = *src;
      tmp_ptr++;
      src++;
   }
   *tmp_ptr = '\0';
   */
   for(int i=0;i<strlen(src);i++)
   {
      dest[i] = src[i];
   }
   dest[strlen(src)] = '\0';
   return dest;
}

int my_strlen(const char* p)
{
   int count = 0;
   while(*p != '\0')
   {
      count++;
      p++;
   }
   return count;
}

vector<char*> make_word_vector(const char* src,const char* delim)
{
   char *copy = new char[strlen(src) + 1];
   strcpy(copy,src);
   char *token = strtok(copy,delim); 
   vector<char*> v;
   while(token != NULL)
   {
      //cout << token << endl;
      v.push_back(token);
      token = strtok(NULL,delim);
   }
   return v;
}

int main()
{
   //string input;
   //input = "Alice was beginning to get very tired of sitting by her sister\non the bank, and of having nothing to do: once or twice she had\npeeped into the book her sister was reading, but it had no";

   const char *input = "Alice was beginning to get very tired of sitting by her sister\non the bank, and of having nothing to do: once or twice she had\npeeped into the book her sister was reading, but it had no";
   char my_input[1024];

   strcpy(my_input,input);

   cout << my_input << endl;

   //vector<char*> word_list = make_word_vector(input_ptr," ");
   //for(const char* word:word_list)
   //   cout << word << endl;

   return 0;
}

