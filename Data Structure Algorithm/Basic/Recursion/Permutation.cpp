#include <bits/stdc++.h>
using namespace std;

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

void perMotation()
{
    vector<int> nums = {1, 2, 3};
    sort(nums.begin(), nums.end());

    do
    {
        for (int num : nums)
        {
            cout << num << " ";
        }
        cout << endl;

    } while (next_permutation(nums.begin(), nums.end()));
}

void PermotationString(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        PermotationString(ros, ans + ch);
    }
}

// problem to find total path from a dise one to 6
int countPathofaDice(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += countPathofaDice(s + i, e);
    }
    return count;
}

// all possible path in Maze form start and end position
int coutPathInMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return coutPathInMaze(n, i + 1, j) + coutPathInMaze(n, i, j + 1);
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;
    //  perMotation();
    // PermotationString("ABC", "");

    // cout << countPathofaDice(0, 3) << endl;
    cout << coutPathInMaze(3, 0, 0)<<endl;
}
