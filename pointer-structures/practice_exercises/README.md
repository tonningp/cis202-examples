 E7.1Write a function

void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call

sort2(&x, &y)
then x <= y after the call.

• E7.2Write a function

double replace_if_greater(double* p, double x)
that replaces the value to which p points with x if x is greater. Return the old value to which p pointed.

• E7.3Write a function that computes the average value of an array of floating-point data:

double average(double* a, int size)
In the function, use a pointer variable, not an integer index, to traverse the array elements.

• E7.4Write a function that returns a pointer to the maximum value of an array of floating-point data:

double* maximum(double* a, int size)
If size is 0, return nullptr.

• E7.5Write a function that returns a pointer to the first occurrence of the character c in the string s, or nullptr if there is no match.

char* find(char s[], char c)
• E7.6Write a function that returns a pointer to the last occurrence of the character c in the string s, or nullptr if there is no match.

char* find_last(char s[], char c)
•• E7.7Write a function that returns a pointer to the nth occurrence of the character c in the string s, or nullptr if there is no match.

char* find_last(char s[], char c, int n)
•• E7.8Write a function that returns a pointer to the first occurrence of the substring t in the string s, or nullptr if there is no match.

char* find(char s[], char t[])
•• E7.9Write a function that, given strings s, t, and u, returns a string (allocated with the new operator) in which all occurrences of t in s are replaced with u:

char* replace_all(const char s[], const char t[], const char u[])
•• E7.10Write a function that reverses the values of an array of floating-point data:

void reverse(double* a, int size)
In the function, use two pointer variables, not integer indexes, to traverse the array elements.

•• E7.11Implement the strncpy function of the standard library.

••• E7.12Implement the standard library function

int strspn(const char s[], const char t[])
that returns the length of the initial portion of s consisting only of characters contained in t (in any order). For example, if all of the characters in s are in t, the function returns the length of s; if the first character in s is not in t, the function returns zero.

•• E7.13Write a function

void reverse(char s[])
that reverses a character string. For example, "Harry" becomes "yrraH".

••• E7.14Using the strncpy and strncat functions, implement a function

void safe_concat(const char a[], const char b[], char result[], 
   int result_maxlength)
that concatenates the strings a and b to the buffer result. Be sure not to overrun the buffer. It can hold result_maxlength characters, not counting the '\0' terminator. (That is, the buffer has result_maxlength + 1 bytes available.)

••• E7.15Write a function int* read_data(int& size) that reads data from cin until the user terminates input by entering Q. The function should set the size reference parameter to the number of numeric inputs. Return a pointer to an array on the free store. That array should have exactly size elements. Of course, you won’t know at the outset how many elements the user will enter. Start with an array of 10 elements, and double the size whenever the array fills up. At the end, allocate an array of the correct size and copy all inputs into it. Be sure to delete any intermediate arrays.

• E7.16Define a structure Point. A point has an x- and a y-coordinate. Write a function double distance(Point a, Point b) that computes the distance from a to b. Write a program that reads the coordinates of the points, calls your function, and displays the result.

• E7.17Using the Point structure from Exercise • E7.16, write a function Point midpoint(Point a, Point b) that computes the point that is halfway between a and b. Write a program that reads the coordinates of the points, calls your function, and displays the result.

•• E7.18Define a structure Triangle that contains three Point members. Write a function that computes the perimeter of a Triangle. Write a program that reads the coordinates of the points, calls your function, and displays the result.

•• E7.19Reimplement the Triangle structure and the perimeter function of Exercise •• E7.18 so that it contains two arrays of three double values each, one for the x-coordinates and one for the y-coordinates.

• E7.20Define an Employee structure with a name and an Employee* pointer to the employee’s manager. For the CEO, that pointer will be a nullptr. Write a program that defines several employees and their managers. For each employee, print the chain of superiors.
