#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m, target;
    cin >> n >> m >> target;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int flag = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr[i][j] == target)
    //         {
    //             cout << "Found in ";
    //             cout << i << " " << j << endl;
    //             flag = 1;
    //             break;
    //         }
    //     }
    // }
    // if (flag == 0)
    // {
    //     cout << "Not found  !";
    // }

    // another approch to find the element in 2d array

    int r = 0, c = m - 1;

    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            cout << r << " " << c << endl;
            flag = 1;
            break;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (flag == 0)
    {
        cout << "Not found";
    }
}
