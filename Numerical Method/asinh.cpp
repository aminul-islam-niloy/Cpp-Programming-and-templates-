// C++ program to demonstrate
// the asinh() function
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	double x = 50.0;

	// Function call to calculate asinh(x) value
	double result = asinh(x);

	cout << "asinh(50.0) = " << result << " radians"
		<< endl;
	cout << "asinh(50.0) = " << result * 180 / 3.141592
		<< " degrees" << endl;
	return 0;
}
