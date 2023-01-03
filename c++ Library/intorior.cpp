// CPP program to demonstrate iterator  invalidations
#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector<int> v = { 1, 6, 10, 15, 20, 25 };

	// Changing vector while iterating over it
	// (This causes iterator invalidation)
	for (auto it = v.begin(); it != v.end(); it++)
		if ((*it) == 6)
			v.push_back(-1);

	for (auto it = v.begin(); it != v.end(); it++)
		cout << (*it) << " ";

	return 0;
}
