#include <bits/stdc++.h>
using namespace std;

int Knapsack(int value[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n - 1] > w)
    {
        return Knapsack(value, wt, n - 1, w);
    }
    return max(Knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], Knapsack(value, wt, n - 1, w));
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    // cout << tilingWays(n);
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int w = 50;

    cout << Knapsack(value, wt, n, w);
}
