// CPP code to illustrate the use of sqrt function
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	double val1 = 225.0;
	double val2 = 300.0;

	cout << fixed << setprecision(4) << sqrt(val1) << endl;
	cout << fixed << setprecision(4) << sqrt(val2) << endl;

	return (0);
}


// CPP Program to demonstrate errors in double sqrt()
// #include <cmath>
// #include <iostream>
// using namespace std;

// int main()
// {
// 	double a = -4, answer;

// 	answer = sqrt(a);
// 	cout << "Square root of " << a << " is " << answer
// 		<< endl;

// 	return 0;
// }


// CPP code to illustrate the use of sqrtf function
// #include <cmath>
// #include <iomanip>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	float val1 = 225.0;
// 	float val2 = 300.0;

// 	cout << fixed << setprecision(12) << sqrtf(val1)
// 		<< endl;
// 	cout << fixed << setprecision(12) << sqrtf(val2)
// 		<< endl;

// 	return (0);
// }



// CPP code to illustrate the incorrectness of sqrt
// function
// #include <cmath>
// #include <iomanip>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	long long int val1 = 1000000000000000000;
// 	long long int val2 = 999999999999999999;

// 	cout << fixed << setprecision(12) << sqrt(val1) << endl;
// 	cout << fixed << setprecision(12) << sqrt(val2) << endl;

// 	return (0);
// }


// CPP code to illustrate the correctness of sqrtl function
// #include <cmath>
// #include <iomanip>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	long long int val1 = 1000000000000000000;
// 	long long int val2 = 999999999999999999;

// 	cout << fixed << setprecision(12) << sqrtl(val1)
// 		<< endl;
// 	cout << fixed << setprecision(12) << sqrtl(val2)
// 		<< endl;

// 	return (0);
// }


