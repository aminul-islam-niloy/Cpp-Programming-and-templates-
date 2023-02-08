

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > ans;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o'
           || c == 'u';
}


void all_substring(string s, int n)
{
    for (int i = 0; i < n; i++) {
        int count_vowel = 0, count_consonant = 0;
        for (int j = i; j < n; j++) {

           
            if (isVowel(s[j]))
                count_vowel++;

            else
                count_consonant++;

            if (count_vowel == count_consonant)
                ans.push_back({ i, j });
        }
    }

    // Printing all substrings
    for (auto x : ans) {
        int l = x.first;
        int r = x.second;

        cout<<l<<r<<" ";

        cout << s.substr(l, r - l + 1) << endl;
    }
}


int main()
{
    string s = "Aminulislamniloy";
    int n = s.size();

    all_substring(s, n);
    return 0;
}