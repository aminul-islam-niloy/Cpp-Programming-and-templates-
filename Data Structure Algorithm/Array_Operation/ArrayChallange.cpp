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
        ans= max(ans,curr);

        j++;
    }

    cout<<ans<<endl;
    
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

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

   // PrintAllSubarray(array, n);
    ArrithmaticArray(array, n);
}