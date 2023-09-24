#include <bits/stdc++.h>
using namespace std;

int AllpairInArray(int arr[], int n)
{
    vector<int> pairSum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pairSum.push_back(arr[i] + arr[j]);
        }
    }

    int sum = 0;
    for (int x : pairSum)
    {
        cout << (sum ^= x) << endl;
    }
}
int allPairSum(int arr[], int n)
{
    vector<int> pairSum;
    for (int i = 0; i < n; i++)
    {
        pairSum.push_back(arr[i] + arr[i]);
    }

    int sum = 0;
    for (int x : pairSum)
    {
        cout << (sum ^= x) << endl;
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
    // int n = sizeof(arr) / sizeof(arr[0]);

    AllpairInArray(arr, n);
    // allPairSum(arr, n);
}
