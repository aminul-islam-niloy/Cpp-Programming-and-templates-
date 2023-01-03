// C++ program to demonstrate constexpr function to evaluate
// the size of array at compile time.
#include <iostream>

constexpr int product(int x, int y) { return (x * y); }

int main()
{
	int arr[product(2, 3)] = {1, 2, 3, 4, 5, 6};
	std::cout << arr[5];
	return 0;
}
