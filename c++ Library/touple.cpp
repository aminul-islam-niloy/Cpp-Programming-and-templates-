//A tuple is an object that can hold a number of elements.
 //The elements can be of different data types. 

// C++ code to demonstrate tuple, get() and make_pair()

#include<iostream>
#include<tuple> // for tuple
using namespace std;


int main()
{
	tuple <char, int, float> op;
	op = make_tuple('a', 10, 15.5);

	// Printing initial tuple values using get()
	cout << "The initial values of tuple are : ";
	cout << get<0>(op) << " " << get<1>(op);
	cout << " " << get<2>(op) << endl;

	// Use of get() to change values of tuple
	get<0>(op) = 'b';
	get<2>(op) = 20.5;

	// Printing modified tuple values
	cout << "The modified values of tuple are : ";
	cout << get<0>(op) << " " << get<1>(op);
	cout << " " << get<2>(op) << endl;

     cout << "The size of tuple is : ";
    cout << tuple_size<decltype(op)>::value << endl;

	return 0;
}



// C++ code to demonstrate working of tie()
// #include<iostream>
// #include<tuple> 
// using namespace std;
// int main()
// {
// 	int i_val;
// 	char ch_val;
// 	float f_val;
	
// 	tuple <int,char,float> tup1(20,'g',17.5);

// 	tie(i_val,ch_val,f_val) = tup1;
	
// 	// Displaying unpacked tuple elements
// 	cout << "The unpacked tuple values (without ignore) are : ";
// 	cout << i_val << " " << ch_val << " " << f_val;
// 	cout << endl;
	
// 	// Use of tie() with ignore
// 	tie(i_val,ignore,f_val) = tup1;
	
// 	// Displaying unpacked tuple elements
// 	// with ignore
// 	cout << "The unpacked tuple values (with ignore) are : ";
// 	cout << i_val << " " << f_val;
// 	cout << endl;

// 	return 0;

// }



// C++ code to demonstrate working of tuple_cat()
// #include<iostream>
// #include<tuple> // for tuple_cat() and tuple
// using namespace std;
// int main()
// {
// 	tuple <int,char,float> tup1(20,'g',17.5);
// 	tuple <int,char,float> tup2(30,'f',10.5);

// 	auto tup3 = tuple_cat(tup1,tup2);

// 	cout << "The new tuple elements in order are : ";
// 	cout << get<0>(tup3) << " " << get<1>(tup3) << " ";
// 	cout << get<2>(tup3) << " " << get<3>(tup3) << " ";
// 	cout << get<4>(tup3) << " " << get<5>(tup3) << endl;

// 	return 0;
// }


