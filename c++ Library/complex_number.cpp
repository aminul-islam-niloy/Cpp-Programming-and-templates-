
//real() imag() norm() polar() arg() and abs()

// Program illustrating the use of real() and
// imag() function
#include <iostream>	
#include <complex>	
using namespace std;

int main()
{	
// defines the complex number: (10 + 2i)
std::complex<double> mycomplex(10.0, 2.0);

// prints the real part using the real function
cout << "Real part: " << real(mycomplex) << endl;
cout << "Imaginary part: " << imag(mycomplex) << endl;
return 0;
}




// Program illustrating the use of arg() and abs()
// #include <iostream>	
// #include <complex>
// using namespace std;

// int main ()
// {	
// std::complex<double> mycomplex (3.0, 4.0);

// // prints the absolute value of the complex number
// cout << "The absolute value of " << mycomplex << " is: ";
// cout << abs(mycomplex) << endl;
	
// cout << "The argument of " << mycomplex << " is: ";
// cout << arg(mycomplex) << endl;

// return 0;
// }




// Program illustrating the use of polar()
// #include <iostream>	
// #include <complex>
// using namespace std;

// int main ()
// {
// cout << "The complex whose magnitude is " << 2.0;
// cout << " and phase angle is " << 0.5;
	
// // use of polar()
// cout << " is " << polar (2.0, 0.5) << endl;

// return 0;
// }

// example to illustrate the use of norm()
// #include <iostream>	
// #include <complex>
// using namespace std;

// int main ()
// {	
// std::complex<double> mycomplex (3.0, 4.0);

// // use of norm()
// cout << "The norm of " << mycomplex << " is "
// 	<< norm(mycomplex) <<endl;

// return 0;
// }

