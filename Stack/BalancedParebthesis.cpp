#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '{' or s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == '{')
        {
            if (!st.empty() and st.top() == '}')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    return ans;
}

int main()
{
    string s = "{[()]}";

    if (isBalanced(s))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}