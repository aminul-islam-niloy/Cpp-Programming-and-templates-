#include <bits/stdc++.h>
using namespace std;

void reverseString(string s)
{
    stack<string> str;

    for (int i = 0; i < s.length(); i++)
    {

        string word = "";

        while (s[i] != ' ' && i <s.length())
        {

            word +=s[i];
           
            i++;
        }
        str.push(word);
    }

    while (!str.empty())
    {
        cout << str.top() << " ";
        str.pop();
    }
    cout << endl;
}

int main()
{
    string s = "This is new Text";
    reverseString(s);
}