// C program to illustrate fesetround() function with rint() function

#include <iostream>
#include <cfenv>
#include <cmath>
using namespace std;

int main()
{
	double x = 3.3, result;
	// setting rounding direction to the nearest integer
	fesetround(FE_TONEAREST);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction towards zero
	fesetround(FE_TOWARDZERO);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction to DOWNWARD
	fesetround(FE_DOWNWARD);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction to UPWARD
	fesetround(FE_UPWARD);
	result = rint(x);
	cout << result << endl;

	return 0;
}
