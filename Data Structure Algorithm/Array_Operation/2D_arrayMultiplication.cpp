#include <iostream>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return 1;
    }

    // Input elements of the first matrix
    int mat1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    // Input elements of the second matrix
    int mat2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Perform matrix multiplication
    int result[r1][c2];
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// input matrix
//  3 2
//  2 3

// 1 2
// 3 4
// 5 6

// 5 6 7
// 8 9 1

// Resultant matrix after multiplication:
// 21 24 9
// 47 54 25
// 73 84 41
