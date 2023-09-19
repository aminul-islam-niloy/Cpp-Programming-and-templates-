#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // Print the current row from left to right
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // Print the current column from top to bottom
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // Check if there are more rows to print
        if (row_start <= row_end)
        {
            // Print the current row from right to left
            for (int col = col_end; col >= col_start; col--)
            {
                cout << arr[row_end][col] << " ";
            }
            row_end--;
        }

        // Check if there are more columns to print
        if (col_start <= col_end)
        {
            // Print the current column from bottom to top
            for (int row = row_end; row >= row_start; row--)
            {
                cout << arr[row][col_start] << " ";
            }
            col_start++;
        }
    }
    return 0;
}
