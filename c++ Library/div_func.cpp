// div() function : Returns the integral quotient and remainder of the division
//  of number by denom ( number/denom ) as a structure of type
//   div_t, ldiv_t or lldiv_t, 
// which has two members: quot and rem. 


// CPP program to illustrate
// div() function
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	div_t result1 = div(100, 6);

	cout << "Quotient of 100/6 = " <<
					result1.quot << endl;
	cout << "Remainder of 100/6 = " <<
					result1.rem << endl;

	ldiv_t result2 = div(19237012L,251L);

	cout << "Quotient of 19237012L/251L = " <<
						result2.quot << endl;
	cout << "Remainder of 19237012L/251L = " <<
							result2.rem << endl;

	return 0;
}
