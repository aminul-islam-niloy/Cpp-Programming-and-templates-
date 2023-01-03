// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <numeric>
using namespace std;

int myfun(int x, int y)
{
	return x * y;
}

int main()
{
	int sum = 1;
	int a[] = { 5, 10, 15 };

	// Simple default accumulate function
	cout << "\nResult using accumulate: ";
	cout << accumulate(a, a + 3, sum);

	// Using accumulate function with
	// defined function
	cout << "\nResult using accumulate with"
			"user-defined function: ";
	cout << accumulate(a, a + 3, sum, myfun);

	// Using accumulate function with
	// pre-defined function
	cout << "\nResult using accumulate with "
			"pre-defined function: ";
	cout << accumulate(a, a + 3, sum, std::minus<int>());

	return 0;
}
