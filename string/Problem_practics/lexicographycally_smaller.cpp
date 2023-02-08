#include <bits/stdc++.h>
using namespace std;

string smallestLexString(string str, int& k)
{
    map<string, bool> present;
    char bigCh;
    int maxIndex;

    if (k <= 0)
        return str;
    else if (k >= str.length()) {
        sort(str.begin(), str.end());
        return str;
    }

    while (!present[str]) {
        bigCh = 'A';

        for (int i = 0; i < k; i++) {
            if (bigCh < str[i]) {
                maxIndex = i;
                bigCh = str[i];
            }
        }

        present[str] = 1;
        str = str.substr(0, maxIndex)
              + str.substr(maxIndex + 1,
                           str.length() - maxIndex - 1)
              + str[maxIndex];
    }

    return present.begin()->first;
}

// Driver's code
int main()
{
    string str = "geeksforgeeks";
    int K = 2;

    // Function Call
    cout << smallestLexString(str, K);
    return 0;
}