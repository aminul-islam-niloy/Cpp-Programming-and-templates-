#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string result = "";
    for (int i = 0; i < s.size(); i++)
    {
        bool is_duplicate = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (s[i] == result[j])
            {
                is_duplicate = true;
                break;
            }
        }
        if (!is_duplicate)
        {
            result += s[i];
        }
    }
    return result;
}

string removeDuplicateUsingRecursion(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];

    string ans = removeDuplicateUsingRecursion(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
// aaaaxaaabxabbbxccxccceeddd
// aaaaaaababbbccccceedddxxxx
string nextPassstringUsingRecursion(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];

    string ans = nextPassstringUsingRecursion(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return (ch + ans);
}

void PrintAllSubstring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    PrintAllSubstring(ros, ans);
    PrintAllSubstring(ros, ans + ch);
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    // string res = removeDuplicates(s);
    // cout << res << endl;
    // cout << removeDuplicateUsingRecursion(s) << endl;
    // cout << nextPassstringUsingRecursion(s) << endl;
    PrintAllSubstring("ABC", "");
}
