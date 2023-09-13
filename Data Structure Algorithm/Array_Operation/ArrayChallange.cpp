#include <bits/stdc++.h>
using namespace std;

int PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int PrintAllSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
}

int ArrithmaticArray(int arr[], int n)
{
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);

        j++;
    }

    cout << ans << endl;
}

int RecordBreaking(int a[], int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << ans << endl;
}

int RepetingArrayproblem(int arr[], int n) // //O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int RepeteFirstElement(int arr[], int n) // O(n)
{
    int min = -1;
    set<int> repElem;

    for (int i = n - 1; i >= 0; i--)
    {
        if (repElem.find(arr[i]) != repElem.end())
            return i;

        else
        {
            repElem.insert(arr[i]);
        }
    }
    return -1;
}

int SubarraySum(int arr[], int n, int target)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            // for (int k = j; k <= j; k++)
            // {
            //    // cout << arr[k] << " ";
            // }
        }
        // cout << endl;
        cout << "Sum is : " << sum << endl;
    }
}

int sumOfSubArray(int arr[], int n, int s)
{
    // two pointer approch
    int i = 0;
    int j = 0;
    int start = -1;
    int en = -1;
    int sum = 0;

    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            start = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << start << " " << en << endl;
}

int smallestPositiveMissing(int arr[], int n)
{

    // First, we place each positive integer in its correct position in the array.
    // For example, if the number 3 is present, we swap it with nums[2].
    // cycle-sort algorithm

    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n &&
               arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // After rearranging, the first position where nums[i] != i + 1 is the missing positive integer.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }

    // If all positive integers from 1 to n are present, return n + 1.
    return n + 1;
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int array[n];

    // int a[n + 1];
    // a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // PrintAllSubarray(array, n);
    // ArrithmaticArray(array, n);
    // RecordBreaking(array, n);
    // int index = RepetingArrayproblem(array, n);

    // int index = RepeteFirstElement(array, n);
    // if (index == -1)
    // {
    //     cout << "No reapting ";
    // }
    // else
    // {
    //     cout << "first repeting  " << array[index] << endl;
    // }

    // SubarraySum(array, n, 12);
    // sumOfSubArray(array, n, 11);

    cout << smallestPositiveMissing(array, n);
}