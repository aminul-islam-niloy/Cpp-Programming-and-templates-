#include <bits/stdc++.h>
using namespace std;

int previousSum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int preSum = previousSum(n-1);
    return n + preSum;
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << previousSum(n);
}
