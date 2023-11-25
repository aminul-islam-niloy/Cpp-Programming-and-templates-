#include <bits/stdc++.h>
using namespace std;

void reverseCharacters(string s)
{
    stack<char> characters;

    for (int i = 0; i < s.length(); i++)
    {
        characters.push(s[i]);
    }

    // print stack elements
    while (!characters.empty())
    {
        cout << characters.top();
        characters.pop();
    }

    cout << endl;
}

int main()
{
    string s = "This is new Text";
    reverseCharacters(s);
    return 0;
}
