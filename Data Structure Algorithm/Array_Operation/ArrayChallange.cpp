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
    sumOfSubArray(array, n, 12);
}