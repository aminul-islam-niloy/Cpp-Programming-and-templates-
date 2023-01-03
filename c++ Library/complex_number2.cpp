// CPP program to illustrate the use of log()
#include <iostream>	
#include <complex>
using namespace std;

int main ()
{
complex<double> mycomplex (-1.0, 0.0);

// use of log()
cout << "The log of " << mycomplex << " is "
	<< log(mycomplex) <<endl;

return 0;
}


// example to illustrate the use of sin(), cos() and tan()
// #include <iostream>	
// #include <complex>
// using namespace std;
// int main ()
// {
// // initializing the complex: (-1.0+0.0i)
// complex<double> mycomplex (0.0, 1.0);

// // use of cos()
// cout << "The cos of " << mycomplex << " is "
// 	<< cos(mycomplex) <<endl;
		
// // use of sin()
// cout << "The sin of " << mycomplex << " is "
// 	<< sin(mycomplex) <<endl;
		
// // use of tan()
// cout << "The tan of " << mycomplex << " is "
// 	<< tan(mycomplex) <<endl;

// return 0;
// }






// CPP program to illustrate the
// use of cosh(),sinh(),tanh()
// #include <iostream>
// #include <cmath>

// // For std::complex
// #include <complex>
// using namespace std;

// // Driver program
// int main()
// {	
// 	// behaves like real cosh, sinh, tanh along the real line;
// 	// z = a + 0i

// 	complex<double> z(1, 0);
// 	cout << "cosh" << z << " = " << cosh(z) << " (cosh(1) = " << cosh(1) << ")"<<endl;
// 	cout << "sinh" << z << " = " << sinh(z)
// 			<< " (sinh(1) = " << sinh(1) << ")"<<endl;
// 	cout << "tanh" << z << " = " << tanh(z)
// 			<< " (tanh(1) = " << tanh(1) << ")"<<endl;
	
// 	// behaves like real cosine,sine,tangent along the imaginary line; z2=0+1i
// 	complex<double> z2(0, 1);
// 	cout << "cosh" << z2 << " = " << cosh(z2)
// 			<< " ( cos(1) = " << cos(1) << ")"<<endl;
// 	cout << "sinh" << z2 << " = " << sinh(z2)
// 			<< " ( sin(1) = " << sin(1) << ")"<<endl;
// 	cout << "tanh" << z2 << " = " << tanh(z2)
// 			<< " ( tan(1) = " << tan(1) << ")"<<endl;
// }


