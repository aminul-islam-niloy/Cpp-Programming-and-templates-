// get bit
#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
// here binary of 5 is 0101 get value in pos 2 in 1

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

// here binary of 5 is 0101 set value 1 and result is 7

int clearBit(int n, int pos)
{
    // mask bit pos 1 and other 0
    //  1's complement and and it with original
    // binary number
    int mask = ~(1 << pos);
    return (n & mask);
}

// update bit = clear bit and set bit

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = (n & mask);
    return (n | (value << pos));
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1) << endl;
}
