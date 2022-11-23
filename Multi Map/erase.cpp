#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;

	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 4, 20 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 5, 50 });

	// prints the elements
	cout << "The multimap before using erase() is : \n";
	cout << "KEY\tELEMENT\n";

	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}

// formula 2

 //function to erase given position

    // auto it = mp.find(2);
    // mp.erase(it);
    // auto it1 = mp.find(5);
    // mp.erase(it1);

//formula 1
    //   mp.erase(1);
    // mp.erase(2);

// formula 3

auto it1 = mp.find(2);
    auto it2 = mp.find(5);
    mp.erase(it1, it2);

// crbegin is used for decending order sort
// prints the elements
	cout << "\nThe multimap after applying erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}