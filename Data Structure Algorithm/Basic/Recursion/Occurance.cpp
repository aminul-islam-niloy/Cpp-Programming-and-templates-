#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int n, int i, int key)
{
    if (i == n) // if empty
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstOccurance(arr, n, i + 1, key);
}

int lastOccurance(int arr[], int n, int i, int key)
{
    if (i == n) // if empty
    {
        return -1;
    }

    int restArray = lastOccurance(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

bool Occurance(int arr[], int n, int target)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

bool OccuranceFirst(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

char OccuranceFirst(const string &s)
{
    int mi= INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                mi= min(mi,j);
            }
        }
    }
    return s[mi];
}


int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << Occurance(arr, n, 2) << endl;
    // cout << OccuranceFirst(arr, n) << endl;

    string s = "abccbaacz";
    cout << OccuranceFirst(s) << endl;
}
