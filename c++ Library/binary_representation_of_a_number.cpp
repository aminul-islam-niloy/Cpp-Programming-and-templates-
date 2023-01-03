// CPP Program to demonstrate the functionality of
// __builtin_popcountll(x)

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x = 2; // 0010
	cout << __builtin_popcountll(x);

	return 0;
}
