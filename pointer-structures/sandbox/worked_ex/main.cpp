#include<iostream>
#include<cstring>


using namespace std;

const int VAR_LENGTH = 80;
void print_record(char variable_parts[][VAR_LENGTH])
{
   cout << "Title: " << variable_parts[0] << endl;
   cout << "First name: " << variable_parts[1] << endl;
   cout << "Last name: " << variable_parts[2] << endl;
   cout << "Street: " << variable_parts[3] << endl;
   cout << "City: " << variable_parts[4] << endl;
   cout << "State: " << variable_parts[5] << endl;
   cout << "Zip: " << variable_parts[6] << endl;
}

int main()
{
   char variable_parts[10][VAR_LENGTH];
	char letter_template[] = "To: 0 1 2\n3\n4, 5 6\n\nDear 0 2: \n\n"
   "The 2 family may be the lucky winner in the C++ sweepstakes.\n"
   "Wouldn't it be exciting if you were the first 4 residents\n"
   "to use ACME's new C++ development environment? etc. etc. \n\n\n";

   strcpy(variable_parts[0], "Ms.");
   strcpy(variable_parts[1], "Sally");
   strcpy(variable_parts[2], "Smith");
   strcpy(variable_parts[3], "123 Main Street");
   strcpy(variable_parts[4], "Anytown");
   strcpy(variable_parts[5], "NY");
   strcpy(variable_parts[6], "12345");
   print_record(variable_parts);
   
   return 0;
}
