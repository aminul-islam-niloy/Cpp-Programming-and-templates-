
//  fmod(): This function is used to return the remainder(modulus) 
//  of 2 floating-point numbers mentioned in its arguments.

// C++ code to demonstrate working of fmod()
// #include <cmath>
// #include <iostream>
// using namespace std;

// int main()
// {

// 	double a, b, c;
// 	a = 9.6;
// 	b = 3.5;

// 	// using fmod() to compute the remainder
// 	// computes 2 as quotient (truncated)
// 	// returns 2.6 as remainder

// 	// c = fmod(a, b);
//     c = remainder(a, b);

// 	cout << "The remainder computed  is : "
// 		<< c;
// 	cout << endl;
// }


// C++ code to demonstrate working of copysign()
// #include <cmath>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	double a, b;

// 	a = 9.6;
// 	b = -3.5;

// 	// using copysign()
// 	cout << "The value returned after copysigning is : ";
// 	cout << copysign(a, b);

// 	cout << endl;
// }


// C++ code to demonstrate working of nextafter()
// #include <cmath>
// #include <iostream>
// using namespace std;
// int main()
// {
// 	double a, b;
// 	a = -3.5;
// 	b = 0.0;

// 	// using nextafter() to compute next approximated value
// 	cout << "The next value approximated is : ";
// 	cout << nextafter(a, b);
// }

// C++ code to demonstrate working of fmin(),fmax()
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double a, b,c;
	a = 2.5;
	b = 2.0;
    c=3.5;

    cout<<endl;
	// using fmin() to compute smallest of two numbers
	cout << "The smallest of 2 numbers is : ";
	cout << fmax(a, b);

    cout<<endl;

    // using fdim() to compute positive difference of two
    // numbers
    cout << "The positive difference of 2 numbers is : ";
    cout << fdim(a, b);

    cout<<endl;
    // using fma() to compute multiply-add
    cout << "The multiply-add of 3 numbers is : ";
    cout << fma(a, b, c);

	cout << endl;
    cout <<endl;
}





