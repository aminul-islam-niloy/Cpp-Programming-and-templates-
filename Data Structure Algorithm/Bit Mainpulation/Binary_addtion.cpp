#include <bits/stdc++.h>
using namespace std;

void BinaryAdd(vector<int> a, vector<int> b)
{
    vector<int> res;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (j >= 0 || i >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i--];
        }
        if (j >= 0)
        {
            sum += b[j--];
        }

        res.push_back(sum % 2);
        carry = sum / 2;
    }

    if (carry)
        res.push_back(carry);
    reverse(res.begin(), res.end());

    for (int x : res)
    {
        cout << x ;
    }
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1010};
    vector<int> b = {1011};
    BinaryAdd(a, b);
}