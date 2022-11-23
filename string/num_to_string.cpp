// C++ code to demonstrate "to_string()" method
// to convert number to string.
#include <iostream>
#include <string> 
using namespace std;

// Driver Code
int main()
{
	int i_val = 20;

	float f_val = 30.50;

	string stri = to_string(i_val);

	string strf = to_string(f_val);

	// Displaying the converted strings
	cout << "The integer in string is : ";
	cout << stri << endl;
	cout << "The float in string is : ";
	cout << strf << endl;

	return 0;
}
