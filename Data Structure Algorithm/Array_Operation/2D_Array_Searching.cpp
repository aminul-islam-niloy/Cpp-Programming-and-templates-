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

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {

    //         if (matrix.empty() || matrix[0].empty()) {
    //             return false;
    //         }

    //         int m = matrix.size();  // Number of rows
    //         int n = matrix[0].size();  // Number of columns
    //         int r = 0, c = n - 1;  // Start from the top-right corner

    //         while (r < m && c >= 0) {
    //             if (matrix[r][c] == target) {
    //                 return true;
    //             } else if (matrix[r][c] > target) {
    //                 c--;  // Move left in the current row
    //             } else {
    //                 r++;  // Move down to the next row
    //             }
    //         }

    //         return false;
    //     }

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
