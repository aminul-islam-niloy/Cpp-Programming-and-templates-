// C++ function for illustration
// multimap::lower_bound() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;

	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 2, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 1, 50 });
	mp.insert({ 4, 50 });

	// when 2 is present
	auto it = mp.lower_bound(1);
	cout << "The lower bound of key 1 is ";
	cout << (*it).first << " "
		<< (*it).second << endl;

	// when 3 is not present
	it = mp.lower_bound(3);
	cout << "The lower bound of key 3 is ";
	cout << (*it).first << " "
		<< (*it).second << endl;

	// when 5 exceeds
	it = mp.lower_bound(5);
	cout << "The lower bound of key 5 is ";
	cout << (*it).first << " "
		<< (*it).second << endl;
	return 0;
}
