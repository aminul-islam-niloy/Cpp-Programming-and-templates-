#include <bits/stdc++.h>
using namespace std;

// upper case conversion
string UpperCaseConversion(string input)
{

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] -= 32;
        }
    }
    cout << input << endl;
}

// lower case conversion
string lowecaseConversion(string input2)
{

    for (int i = 0; i < input2.size(); i++)
    {
        if (input2[i] >= 'A' && input2[i] <= 'Z')
        {
            input2[i] += 32;
        }
    }
    cout << input2 << endl;
}
string maximumOccurance(string s)
{
    int frequency[26];
    for (int i = 0; i < 26; i++)
    {
        frequency[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        frequency[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxFre = 0;

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > maxFre)
        {
            maxFre = frequency[i];
            ans = i + 'a';
        }
    }
    cout << maxFre << " " << ans << endl;
}

void reverseString(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string input;
    getline(cin, input);

    UpperCaseConversion(input);
    lowecaseConversion(input);
    maximumOccurance(input);

    // using bulidin function

    transform(input.begin(), input.end(), input.begin(), ::toupper);
    cout << input << endl;

    // convert string to number and find gretest element in c++

    string str = "7645787656";

    sort(str.begin(), str.end(), greater<int>());
    cout << str[0] << endl;
}