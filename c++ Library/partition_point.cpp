// C++ program to get odd elements
// and even elements
#include <iostream> // std::cout
#include <algorithm> // std::partition, std::partition_point
#include <vector> // std::vector

bool IsOdd(int i) { return (i % 2) == 1; }

int main()
{
	std::vector<int> data{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector<int> odd, even;

	// partition data on the basis of odd elements using pred IsOdd()
	std::stable_partition(data.begin(), data.end(), IsOdd);

	// gets the partition point based on odd elements
	auto it = std::partition_point(data.begin(), data.end(),
													IsOdd);

	// assign elements to odd from beginning till partition point.
	odd.assign(data.begin(), it);
	even.assign(it, data.end());

	// print contents of odd:
	std::cout << "odd:";
	for (int& x : odd)
		std::cout << ' ' << x;
	std::cout << '\n';

	// print contents of even:
	std::cout << "even:";
	for (int& x : even)
		std::cout << ' ' << x;
	std::cout << '\n';

	return 0;
}


