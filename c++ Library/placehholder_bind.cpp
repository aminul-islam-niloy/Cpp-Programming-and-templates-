// #include<iostream>
// #include <functional>
// using namespace std;
// using namespace std::placeholders;


// void func(int a, int b, int c){
//     cout<<(a-b-c)<<endl;
// }

// int main(){

// auto fn1 = bind(func, _1, 2, 3);
// auto fn2 = bind(func, 2, _1, 3);

// fn1(10);
// fn2(10);

//     return 0;

// }



// C++ code to demonstrate placeholder
// property 1
#include <iostream>
#include <functional> 
using namespace std;

using namespace std::placeholders;

void func(int a, int b, int c)
{
	cout << (a - b - c) << endl;
}

int main ()
{

	using namespace std::placeholders;
	auto fn1 = bind(func, _2, 2, _1);
    //here _2 is third and 2 is second and _1 is first value.

	cout << "The value of function is : ";
	fn1(1, 13);

	auto fn2 = bind(func, _1, 2, _2);
    // here _1 is a and 2 is b and _2 is c
	cout << "The value of function after changing"
		" placeholder position is : ";
	fn2(1, 13);

	return 0;
}
