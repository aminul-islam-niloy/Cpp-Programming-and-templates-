//program to illustrate fegetround() function with
// rint() function using switch case


#include <iostream>
#include <cfenv>
#include <cmath>
#pragma STDC FENV_ACCESS ON
using namespace std;

void direction()
{
	switch (fegetround())
     {
	case FE_TONEAREST: cout << "FE_TONEAREST";
		break;
	case FE_DOWNWARD: cout << "FE_DOWNWARD";
		break;
	case FE_UPWARD: cout << "FE_UPWARD";
		break;
	case FE_TOWARDZERO: cout << "FE_TOWARDZERO";
		break;
	default: cout << "unknown";
	};
	cout << endl;
}
// Driver Program
int main()
{
	double x = 3.7;
	fesetround(FE_UPWARD);
	rint(x);
	direction();

	fesetround(FE_DOWNWARD);
	rint(x);
	direction();

	fesetround(FE_TOWARDZERO);
	rint(x);
	direction();

	fesetround(FE_TONEAREST);
	rint(x);
	direction();

	return 0;
}
