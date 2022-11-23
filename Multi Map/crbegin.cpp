// C++ program to illustrate
// multimap::crend() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;
    //main furmula is it's start with decending order(reverse a list) and automatically sort

	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 4, 20 });
	mp.insert({ 5, 50 });

	// prints the elements
	cout << "\nThe multimap in reverse order is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}
