// CPP Program to demonstrate adjacent_difference()
#include <functional>
#include <iostream>
#include <numeric>
using namespace std;

int myfun(int x, int y) { return x + y; }

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int b[6];

	// using adjacent_difference function
	adjacent_difference(a, a + 6, b);
	cout << "\nResult using adjacent_difference: ";
	for (int i = 0; i < 6; i++)
		std::cout << b[i] << ' ';

	// using adjacent_difference function
	// user defined function
	adjacent_difference(a, a + 6, b, myfun);
	cout << "\nResult using accumulate with user-"
			"defined function: ";
	for (int i = 0; i < 6; i++)
		std::cout << b[i] << ' ';

	// using adjacent_difference with pre-defined function
	adjacent_difference(a, a + 6, b, multiplies<int>());

	cout << "\nResult using accumulate with pre-defined "
			"function: ";
	for (int i = 0; i < 6; i++)
		std::cout << b[i] << ' ';

	return 0;
}




// CPP Program to demonstrate iota()
// #include <iostream>
// #include <numeric>
// using namespace std;

// // Driver Code
// int main()
// {
// 	int a[7];

// 	// using iota function to store 100, 101, 102,...
// 	iota(a, a + 7, 100);
// 	cout << " a : ";
// 	for (int& x : a)
// 		cout << ' ' << x;

// 	return 0;
// }

