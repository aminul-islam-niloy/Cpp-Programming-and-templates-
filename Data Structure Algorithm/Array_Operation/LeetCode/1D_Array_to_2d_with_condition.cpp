#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    vector<vector<int>> result;
    for (int num : nums)
    {
        bool found = false;

        for (vector<int> &row : result)
        {
            if (find(row.begin(), row.end(), num) == row.end())
            {
                row.push_back(num);
                found = true;
                break;
            }
        }
        if (!found)
        {
            result.push_back({num});
        }
    }
    return result;
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> nums1 = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> result1 = findMatrix(nums1);

    return 0;
}