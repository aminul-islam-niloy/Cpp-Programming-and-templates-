// C++ code to demonstrate the working of
// is_array() and is_same()

// #include<type_traits>
// #include<iostream>
// #include<array>
// #include<string>
// using namespace std;

// int main()
// {
// 	// checking which is array using is_array
// 	cout << "Is Integer an array? : " << is_array<int>::value << endl;
	
// 	cout << "Is Array an array? : " << is_array<int[10]>::value << endl;
	
// 	cout << "Is 2D Array an array? : "
// 	<< is_array<int[10][10]>::value << endl;
	
// 	cout << "Is String an array? : " << is_array<string>::value << endl;
	
// 	cout << "Is Character Array an array? : "
// 	<< is_array<char[10]>::value << endl;
	
// 	cout << "Is Array class type an array? : "
// 	<< is_array<array<int,3>>::value << endl;
	
// 	cout << endl;
	
// 	// checking for same types using is_same()
// 	cout << "Is 2D array same as 1D array? : " <<
// 	is_same<int[10],int[10][10]>::value << endl;
	
// 	cout << "Is Character array same as Integer array? : "
// 	<< is_same<int[10],char[10]>::value << endl;
	
// 	cout << "Is 1D array same as 1D array (Different sizes) ? : "
// 	<< is_same<int[10],int[20]>::value << endl;
	
// 	cout << "Is 1D array same as 1D array? (Same sizes): "
// 	<< is_same<int[10],int[10]>::value << endl;
// 	return 0;
// }






//rank()

// C++ code to demonstrate the working of
// rank()

// #include<type_traits> // for array query functions
// #include<iostream>
// using namespace std;

// int main()
// {
// 	// checking rank of different types
// 	cout << "The rank of integer is : " << rank<int>::value << endl;
	
// 	cout << "The rank of 1D integer array is : "
// 	<< rank<int[10]>::value << endl;
	
// 	cout << "The rank of 2D integer array is : "
// 	<< rank<int[20][10]>::value << endl;
	
// 	cout << "The rank of 3D integer array is : "
// 	<< rank<int[20][10][40]>::value << endl;
	
// 	cout << "The rank of 1D character array is : "
// 	<< rank<char[10]>::value << endl;

// 	cout << endl;
	
// }


// C++ code to demonstrate the working of
// extent(), remove_extent(), remove_all_extents()

#include<type_traits> // for array query functions
#include<iostream>
using namespace std;

int main()
{

	
	// Checking extent of different types (using extent)
	cout << "The extent of 1st dimension of 3D integer array is : " ;
	cout << extent<int[20][10][40],0>::value << endl;
	
	cout << "The extent of 2nd dimension of 3D integer array is : " ;
	cout << extent<int[20][10][40],1>::value << endl;
	
	cout << "The extent of 3rd dimension of 3D integer array is : " ;
	cout << extent<int[20][10][40],2>::value << endl;
	
	cout << "The extent of 4th dimension of 3D integer array is : " ;
	cout << extent<int[20][10][40],3>::value << endl;
	
	cout << endl;
	
	// Removing extent of types
	cout << "The rank after removing 1 extent is : " ;
	cout << rank<remove_extent<int[20][10][30]>::type>::value << endl;
	
	// 1st dimension from left is deleted
	cout << "The extent of 1st after removing 1 extent is : " ;
	cout << extent<remove_extent<int[20][10][30]>::type>::value << endl;
	
	cout << endl;
	
	// Removing all extents of types
	cout << "The rank after removing all extents is : " ;
	cout << rank<remove_all_extents<int[20][10][30]>::type>::value << endl;
	
	// All extents are deleted
	cout << "The extent of 1st after removing all extents is : " ;
	cout << extent<remove_all_extents<int[20][10][30]>::type>::value << endl;

	cout << endl;
	
}


