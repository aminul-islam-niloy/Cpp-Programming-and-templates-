// C++ program to illustrate
// the multimap::cbegin() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;

	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 3, 90 });
	mp.insert({ 4, 20 });
	mp.insert({ 5, 50 });

	auto ite = mp.cbegin();

	cout << "The first element is: ";
	cout << "{" << ite->first << ", "
		<< ite->second << "}\n";

	// prints the elements
	cout << "\nThe multimap is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.cbegin(); itr != mp.cend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}
