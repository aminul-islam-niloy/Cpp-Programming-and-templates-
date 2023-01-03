// C++ program to demonstrate working of partial_sum()
#include <iostream>
#include <numeric>
using namespace std;


int myfun(int x, int y)
{
	// the sum of element is twice of its adjacent element
	return x + 2 * y;
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[5];

	// Default function
	partial_sum(a, a + 5, b);

	cout << "Partial Sum - Using Default function: ";
	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << '\n';

	// Using user defined function
	partial_sum(a, a + 5, b, myfun);

	cout << "Partial sum - Using user defined function: ";
	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << '\n';

	return 0;
}
