// C++ program to illustrate
// the atanh() function
// all return values
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	// Return value when -1<x<1
	int x = 0;
	// Function call to calculate atanh(x) value
	double result = atanh(x);

	cout << "atanh(0) = " << result << " radians\n";
	cout << "atanh(0) = " << result * 180 / 3.141592
		<< " degrees\n";

	// Return value when x=-1
	x = -1;
	result = atanh(x);

	cout << "\natanh(-1) = " << result << " radians\n";
	cout << "atanh(-1) = " << result * 180 / 3.141592
		<< " degrees\n";

	// Return value when x=1
	x = 1;
	result = atanh(x);

	cout << "\natanh(1) = " << result << " radians\n";
	cout << "atanh(1) = " << result * 180 / 3.141592
		<< " degrees\n";

	// Return value when x<-1 or x>1
	x = -2;
	result = atanh(x);

	cout << "\natanh(-2) = " << result << " radians\n";
	cout << "atanh(-2) = " << result * 180 / 3.141592
		<< " degrees\n";

	return 0;
}
