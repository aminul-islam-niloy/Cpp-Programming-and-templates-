#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 
  int base, exponent, i;
  long result=1;

  cout << "Enter base and exponent: ";
  cin >> base >> exponent;

 result = pow(base,exponent);
  cout << "Result = " << result << endl;

  return 0;
}