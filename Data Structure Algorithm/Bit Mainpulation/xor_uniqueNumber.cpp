// get bit
#include <bits/stdc++.h>
using namespace std;
int uniqueValue(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}
void uniqueCharacter(const string &s)
{
    unordered_set<char> uniqueChars;
    string result;

    for (char c : s)
    {
        if (uniqueChars.find(c) == uniqueChars.end())
        {
            uniqueChars.insert(c);
            result.push_back(c);
        }
    }

    cout << result << endl;
}

int setbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void twoUniqueNumber2(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }

    int setBit = 0;

    int pos = 0;
    while (setBit != 1)
    {
        setBit = sum & 1;
        pos++;
        sum = sum >> 1;
    }
    int newXor = 0;

    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }
    int tempXor = sum;
    cout << (tempXor ^ newXor);
}

int findComplement(int num)
{
    int mask = 1;
    while (mask < num)
    {
        mask = (mask << 1) | 1;
    }
    return num ^ mask;
}
void twoUniqueNumber(int arr[], int n)
{
    int xorResult = 0;
    for (int i = 0; i < n; i++)
    {
        xorResult ^= arr[i];
    }

    // Find the rightmost set bit in xorResult
    int rightmostSetBit = 1;
    while ((xorResult & rightmostSetBit) == 0)
    {
        rightmostSetBit <<= 1;
    }

    // Initialize two unique numbers as 0
    int uniqueNum1 = 0;
    int uniqueNum2 = 0;

    // Divide the elements into two groups based on the rightmost set bit
    for (int i=0; i<n; i++)
    {
        if ((arr[i] & rightmostSetBit) == 0)
        {
            uniqueNum1 ^= arr[i];
        }
        else
        {
            uniqueNum2 ^= arr[i];
        }
    }

    cout  << uniqueNum1 << " and " << uniqueNum2 << endl;
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    string str = "amin";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << uniqueValue(arr, n);
    // uniqueCharacter("abcdeffgh");
    twoUniqueNumber(arr, n);
  
}
