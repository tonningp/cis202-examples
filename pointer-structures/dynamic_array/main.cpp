#include<iostream>


using namespace std;


int main()
{
    char *c_array = new char[27];
    c_array[0] = 'a';
    c_array[1] = 'b';
    c_array[2] = 'c';
    c_array[3] = 'd';
    c_array[26] = '\0';
    cout << c_array << endl;

    return 0;
}
