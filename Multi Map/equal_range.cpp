// C++ program to illustrate the
// multimap::equal_range() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;
	// insert elements in random order
	mp.insert({ 2, 70 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 1, 20 });
	mp.insert({ 2, 50 });

	// Stores the range of key 1
	auto it = mp.equal_range(2);

	cout << "The multimap elements of key 1 is : \n";
	cout << "KEY\tELEMENT\n";

	// Prints all the elements of key 1
	for (auto itr = it.first; itr != it.second; ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}
