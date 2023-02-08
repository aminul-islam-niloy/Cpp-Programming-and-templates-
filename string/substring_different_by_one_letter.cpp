
#include <bits/stdc++.h>
using namespace std;

int countWays(string str, int n)
{
	int len = str.length();

	int count = 0;

	for (int i = 0; i <= len - n; i++) {

		// To store the first substring
		string s1 = str.substr(i, n);

		for (int j = i + 1; j <= len - n; j++) {

			// To store the second substring
			string s2 = str.substr(j, n);

			// Check if the two substrings differ by just one letter
			int diff = 0;
			for (int k = 0; k < n; k++)
				if (s1[k] != s2[k])
					diff++;

			// If the two substrings differ by just one letter, increase the count
			if (diff == 1)
				count++;
		}
	}

	return count;
}

// Driver code
int main()
{
	string str = "abcb";
	int N = 2;

	// Function Call
	cout << countWays(str, N);
	return 0;
}
