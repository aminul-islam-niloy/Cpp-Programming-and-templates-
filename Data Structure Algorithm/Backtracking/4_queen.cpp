#include <iostream>
#include <vector>

using namespace std;

void printSolution(const vector<vector<int>> &board)
{
    for (const auto &row : board)
    {
        for (int cell : row)
        {
            cout << (cell ? "Q" : ".");
             
        }
        printf("\n");
    }
     cout << '\n';
  
}

bool isSafe(vector<vector<int>> &board, int row, int col, int N)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    return true;
}

bool solveNQueens(vector<vector<int>> &board, int col, int N)
{
    if (col == N)
    {
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col, N))
        {
            board[i][col] = 1;
            res = solveNQueens(board, col + 1, N) || res;
            board[i][col] = 0; // Backtrack
        }
    }
    return res;
}

int main()
{
    int N = 4;
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQueens(board, 0, N))
    {
        cout << "Solution does not exist" << endl;
    }

    return 0;
}
