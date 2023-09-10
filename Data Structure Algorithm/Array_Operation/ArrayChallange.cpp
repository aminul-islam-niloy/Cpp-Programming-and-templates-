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

    int index = RepeteFirstElement(array, n);
    if (index == -1)
    {
        cout << "No reapting ";
    }
    else
    {
        cout << "first repeting  " << array[index] << endl;
    }
}