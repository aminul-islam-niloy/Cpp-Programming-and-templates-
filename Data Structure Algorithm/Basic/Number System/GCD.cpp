#include <bits/stdc++.h>
using namespace std;

// inclusion and exclusion principle
int gcdFunction(int n, int a, int b)
{
    int c1 = n / a; // 8
    int c2 = n / b; // 5

    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

  //  cout << gcdFunction(n, a, b);
    cout << GCD(42, 24) << endl;
}