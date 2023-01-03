// C++ Program to test the functioning of std::gslice
#include <cstddef> // std::size_t
#include <iostream> 
#include <valarray> // std::valarray, std::gslice
using namespace std;

int main()
{
	// valarray sample of size 14
	valarray<int> sample(100);
	for (int i = 0; i < 100; ++i)
		sample[i] = i;

	size_t start = 1;
	size_t lengths[] = { 4, 6 };
	size_t strides[] = { 7, 2 };

	// gslice object which can be used directly
	gslice mygslice( start,valarray<size_t>(lengths, 2),
                     valarray<size_t>(strides, 2));

	// creating data using gslice
	valarray<int> data = sample[mygslice];

     cout << "gslice:";

	for (int i = 0; i < data.size(); i++)
         cout << ' ' << data[i];
         cout << '\n';

	return 0;
}
