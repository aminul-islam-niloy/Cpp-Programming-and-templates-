
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr = { 10, 15, 20, 25, 30, 35 };

	if (binary_search(arr.begin(), arr.end(), 15))
		cout << "15 exists in vector";
	else
		cout << "15 does not exist";

	cout << endl;

	if (binary_search(arr.begin(), arr.end(), 23))
		cout << "23 exists in vector";
	else
		cout << "23 does not exist";

	cout << endl;
}
