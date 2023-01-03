// C++ code to demonstrate working of empty() and fill()
#include<iostream>
#include<array> 
using namespace std;
int main()
{
	array<int,6> ar;
	array<int,0> ar1;

	// Checking size of array if it is empty
	ar1.empty()? cout << "Array empty":
		  cout << "Array not empty";
	cout << endl;

	// Filling array with 0
	ar.fill(0);

	// Displaying array after filling
	cout << "Array after filling operation is : ";
	for ( int i=0; i<6; i++)
		cout << ar[i] << " ";

	return 0;

}
