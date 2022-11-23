#include <iostream>
using namespace std;

int main() {

  int i, count=0, n;

  cout << "Enter a positive integer (2 to ----): ";
  cin >> n;


  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      count ++;
      break;
    }
  }

  if (count ==0)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
