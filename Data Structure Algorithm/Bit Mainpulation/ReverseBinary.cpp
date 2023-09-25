#include <iostream>
#include <bitset>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    unsigned int num;
    cin >> num;

    unsigned int reversedNum = 0;
    int numBits = 32;

    for (int i = 0; i < numBits; i++)
    {
        reversedNum |= ((num & 1) << (numBits - 1 - i));
        num >>= 1;
    }

    cout << "Reversed: " << bitset<32>(reversedNum )<< endl;

    return 0;
}
