#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{
    if (m * n != original.size())
    {
        return {};
    }

    vector<vector<int>> result(m, vector<int>(n));
    int index = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            result[i][j] = original[index++];
        }
    }

    return result;
}

int main()
{
    vector<int> original1 = {1, 2, 3, 4};
    int m1 = 2;
    int n1 = 2;
    vector<vector<int>> result1 = construct2DArray(original1, m1, n1);
    for (const auto &row : result1)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
