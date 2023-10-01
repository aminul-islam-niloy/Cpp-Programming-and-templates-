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

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    string res = removeDuplicates(s);
    cout<<res<<endl;
}
