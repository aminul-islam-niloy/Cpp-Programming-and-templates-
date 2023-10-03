#include <bits/stdc++.h>
using namespace std;

// a given tile 2x1 and another big tile 4x1 find way to fill with tile
int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << tilingWays(n);
}
