#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> nums)
{
    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        int sum = 0;
        int mask = 1 << i;
        for (int num : nums)
        {
            if (num & mask)
            {
                sum++;
            }
        }

        if (sum % 3 != 0)
        {
            result |= mask;
        }
    }

    cout << result;
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> num = {2, 2, 3, 2};
    singleNumber(num);
}
