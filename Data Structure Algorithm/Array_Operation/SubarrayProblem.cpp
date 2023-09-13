#include <bits/stdc++.h>
using namespace std;

int MaximumPossibleSum(int a[], int n)
{
    int MAX = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];

                // cout << a[k] << " ";
            }

            // anothr approch is
            //  MAX= max(MAX,sum);

            if (sum > MAX)
            {
                MAX = sum;
            }
        }
    }
    cout << MAX << endl;
}

void PossibleSubArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {

                cout << a[k] << " ";
            }

            cout << endl;
        }
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MaximumPossibleSum(arr, n);

    // PossibleSubArray(arr, n);
}