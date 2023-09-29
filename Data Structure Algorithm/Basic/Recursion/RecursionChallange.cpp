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

    cout << SortedOrNot(arr, n);
}
