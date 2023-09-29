#include <bits/stdc++.h>
using namespace std;

bool SortedOrNot(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool sorted = SortedOrNot(a + 1, n - 1);

    bool ans = (a[0] < a[1] && sorted);
    return ans;
}

void DecreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;

    DecreasingOrder(n - 1);
}

void IncreasingOrder(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    IncreasingOrder(n - 1);
    cout << n << endl;
}

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

    // cout << SortedOrNot(arr, n);

    //  DecreasingOrder(n);
    // IncreasingOrder(n);

   // cout << firstOccurance(arr, n, 0, 2) << endl;
    cout << lastOccurance(arr, n, 0, 2) << endl;
}
