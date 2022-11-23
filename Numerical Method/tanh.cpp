// #include<bits/stdc++.h>
// using namespace std;
// int  main(){
//     // double x=4.1;
//     // double x=-4;
//     // double x= 3000.0;

//  	int x = -4;
// 	double result;

// 	result = cosh(x);
// 	cout << "cosh(-4) = " << result << endl;

//     // double xdegree= 90;
//     // x=xdegree*3.1416/180;

//     // result=sinh(x);
//     // cout<<"sinh(90 degree) = "<< result<<endl;

//     double xDegrees = 90;
//     // convert to radians
//     x = xDegrees * 3.14159 / 180;
  
// result = cosh(x);
// 	cout << "cosh(90 degrees) = " << result << endl;
  

// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int x = 4;
    // int x =- 4;
    int x= 3000;
	double result;

	result = tanh(x);
	cout << "tan(-4) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = tanh(x);
	cout << "tenh(90 degrees) = " << result << endl;

	return 0;
}
