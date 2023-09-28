#include <bits/stdc++.h>
using namespace std;

int previousSum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int preSum = previousSum(n - 1);
    return n + preSum;
}

int PowerOfP(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int pow = PowerOfP(n, p - 1);

    return n * pow;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    int fact= factorial(n-1);
    return n *fact ;
}

int febonacci(int n){

    if(n==0|| n==1){
        return n;
    }

    return febonacci(n-1)+ febonacci(n-2);
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int p;
    cin >> p;

    // cout << previousSum(n);

   // cout << PowerOfP(n, p);

  // cout<<factorial(n);
  cout<<febonacci(n);
}
