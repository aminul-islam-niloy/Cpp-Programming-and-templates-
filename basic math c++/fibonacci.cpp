
#include<iostream>
using namespace std;
int main()
{
  int n, i, a=0, b=1, c;

  // take input
  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Fibonacci Series is: " << endl;
  for (i=a; i<=n; i++)
  {
    cout << a << "  ";
    c=a+b;
    a=b;
    b=c;
  }

  return 0;
}