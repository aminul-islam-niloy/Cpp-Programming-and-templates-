// CPP Program to demonstrate that memset initialises all
// elements of an integer array to 0 or -1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];

	// all elements of A are zero
	memset(a, 0, sizeof(a));
	for (int i = 0; i < 5; i++)
		cout << a[i] << endl;
	cout << endl;

	// all elements of A are -1
	memset(a, -1, sizeof(a));
	for (int i = 0; i < 5; i++)
		cout << a[i] << endl;
	cout << endl;

	// will not work because works on 0 and -1
	memset(a, 5, sizeof(a));
	for (int i = 0; i < 5; i++)
		cout << a[i] <<endl;
}
