
//C++98 introduced a special container called valarray to hold and 
//provide mathematical operations on arrays efficiently.

//It supports element-wise mathematical operations and various forms of 
//generalized subscript operators, slicing and indirect access.
//As compare to vectors, valarrays are efficient in certain mathematical 
//operations than vectors also.


// C++ code to demonstrate the working of
// apply() and sum()
#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
	valarray<int> varr = { 10, 2, 20, 1, 30 };
	
	valarray<int> varr1 ;
	
	// Using apply() to increment all elements by 5
	varr1 = varr.apply([](int x)
                         {return x=x+5;});
	
	// Displaying new elements value
	cout << "The new valarray with manipulated values is : ";
	for (int &x: varr1) cout << x << " ";
	cout << endl;
	
	// Displaying sum of both old and new valarray
	cout << "The sum of old valarray is : ";
	cout << varr.sum() << endl;
	cout << "The sum of new valarray is : ";
	cout << varr1.sum() << endl;

	return 0;
	
}
