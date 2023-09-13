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

int CumulativeSumOFMaximum(int a[], int n)
{
    int currentSum[n + 1];
    currentSum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currentSum[i] = currentSum[i - 1] + a[i - 1];
    }

    int maxSum = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        int sum = 0;

        for (int j = 0; j < i; j++)
        {
            sum = currentSum[i] - currentSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum;
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

int ArrayPairSum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int ReduceTArrayPairSum(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[low] + arr[high] == target)
        {
            cout << arr[low] << " " << arr[high] << endl;
            flag = 1;
            return 0;
        }

        else if (arr[low] + arr[high] < target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    if (flag == 0)
    {
        cout << "Not Match Found ";
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

    // MaximumPossibleSum(arr, n);
    // CumulativeSumOFMaximum(arr, n);

    // PossibleSubArray(arr, n);
    // ArrayPairSum(arr, n, 12);

    ReduceTArrayPairSum(arr, n, 31);
}