// C++ program to find modulo of floating point numbers.

// #include <bits/stdc++.h>
// using namespace std;

// double findMod(double a, double b)
// {
// 	double mod;
// 	// Handling negative values
// 	if (a < 0)
// 		mod = -a;
// 	else
// 		mod = a;
// 	if (b < 0)
// 		b = -b;

// 	// Finding mod by repeated subtraction
	
// 	while (mod >= b)
// 		mod = mod - b;

// 	// Sign of result typically depends
// 	// on sign of a.
// 	if (a < 0)
// 		return -mod;

// 	return mod;
// }

// // Driver Function
// int main()
// {
// 	double a = 9.7, b = 2.3;
// 	cout << findMod(a, b);
// 	return 0;
// }


// CPP program to find modulo of floating
// point numbers using library function.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a = 9.7, b = 2.3;
	cout << fmod(a, b);
	return 0;
}

