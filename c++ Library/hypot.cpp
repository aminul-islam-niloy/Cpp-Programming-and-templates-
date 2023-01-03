// CPP program to illustrate hypot() function
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double x = 9, y = 10, res;
	res = hypot(x, y);

	// hypot() returns double in this case
	cout << res << endl;
	long double a, b, result;
	a = 4.525252;
	b = 5.767676;

	// hypot() returns long double in this case
	result = hypot(a, b);
	cout << result<<endl;

     float m = 9.3425, n = 10.0987, resf;
  
    // hypotf() takes float values and returns float
    resf = hypotf(m, n);
    cout << resf << endl;

    long double xl = 9.3425453435, yl = 10.0987456456, resl;
  
    // hypotl() takes long double values and returns long double
    resl = hypotl(x, y);
    cout << resl << endl;
   
    return 0;

}
