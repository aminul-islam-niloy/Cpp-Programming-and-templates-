// CPP program to demonstrate insert and
// delete in set
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	// set declare
	set<int> s;

	// Elements added to set
	s.insert(12);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(90);
	s.insert(85);
	s.insert(45);

	// Iterator declared to traverse
	// set elements
	set<int>::iterator it, it1, it2;
	cout << "Set elements after sort and "
			"removing duplicates:\n";

	for (it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';
	cout << '\n';

	it1 = s.find(10);
	it2 = s.find(85);

	// elements from 10 to elements before
	// 85 erased
	s.erase(it1, it2);
    
	cout << "Set Elements after erase:\n";
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';

	return 0;
}
