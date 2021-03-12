#include "string.h"
#include <cstring>

String::String()
{
   cout << "Constructing empty string" << endl;
   len = 0;
   buffer = nullptr;
}

String::String(const char s[])
{
   cout << "Constructing \"" << s << "\"" << endl;
   copy_buffer(s,strlen(s));
}

String::String(const String& other)
{
   cout << "Copying \"" << other << "\"" << endl;
   copy_buffer(other.buffer,other.len);
}

void String::copy_buffer(const char bf[],int ln)
{
   len = ln;
   if (len > 0)
   {   
      buffer = new char[len];
      for (int i = 0; i < len; i++)
      {
         buffer[i] = bf[i];
      }
   }
   else
   {
      buffer = nullptr;
   }   
}

String& String::operator=(const String& other)
{
   cout << "Assigning \"" << other << "\" to \""
      << *this << "\"" << endl;
   if (this != &other)
   {
      delete[] buffer;
      copy_buffer(other.buffer,other.len);
    }
    return *this;
}

String::~String()
{
   cout << "Destroying \"" << *this << "\"" << endl;
   delete[] buffer;
}

int String::length() const
{
   return len;
}

String String::substr(int start, int length) const
{
   String result;
   if (length > 0)
   {
      result.len = length;
      result.buffer = new char[length];
      for (int i = 0; i < length; i++)
      {
         result.buffer[i] = buffer[start + i];
      }
   }
   return result;
}

String String::operator+(const String& other) const
{
   String result;
   result.len = len + other.len;
   result.buffer = new char[result.len];
   for (int i = 0; i < len; i++)
   {
      result.buffer[i] = buffer[i];
   }
   for (int i = 0; i < other.len; i++)
   {
      result.buffer[len + i] = other.buffer[i];
   }
   return result;
}

bool String::operator==(const String& other) const
{
   if (len != other.len) { return false; }
   for (int i = 0; i < len; i++)
   {
      if (buffer[i] != other.buffer[i]) { return false; }
   }
   return true;
}

void String::print(ostream& out) const
{
   for (int i = 0; i < len; i++)
   {
      out << buffer[i];
   }
}

ostream& operator<<(ostream& out, const String& str)
{
   str.print(out);
   return out;
}

bool operator!=(const String& s, const String& t)
{
   return !(s == t);
}
