// get bit
#include <bits/stdc++.h>
using namespace std;

int allPossibleSubArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

string allPossibleSubString(string str)
{
    int n = str.length();

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            string substring = str.substr(i, j - i + 1);
            cout << substring << endl;
        }
    }
}

void subsetOfSet(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
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
    string str = "amin";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   // allPossibleSubArray(arr, n);
   // allPossibleSubString(str);
    subsetOfSet(arr,n);
}
