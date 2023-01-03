 // CPP Program to illustrate std::setbase , setw, 
// //to represent octal and hexadecimal

// #include <iostream>
// #include <iomanip> 

// int main()
// {
// 	// set base to hexadecimal
// 	std::cout << std::setbase(16);
// 	// displaying 255 in hexadecimal
// 	std::cout << 100 << std::endl;

// 	// set base to Octal
// 	std::cout << std::setbase(8);
// 	// displaying 255 in Octal
// 	std::cout << 255 << std::endl;
// 	return 0;
// }


// CPP Program to illustrate std::setw manipulator
// #include <iostream>
// #include <iomanip> 

// int main()
// {

// 	// set width of 10
// 	std::cout << std::setw(10);
// 	std::cout << 100 << std::endl;

// 	std::string str = "GFG";

// 	// set width of 12
// 	std::cout << std::setw(8);

// 	std::cout << str << std::endl;
// 	return 0;
// }


// #include <iostream>
// #include<iomanip>
// #include<string>
// using std::cout;
// using std::string;
// using std::endl;

// int main() {
// 	string temp="Hello setw";
// 	cout<<std::setw(5)<<temp<<endl;
// 	return 0;
// }


// CPP Program to test std::setfill manipulator
// #include <iostream>
// #include <iomanip> // std::setfill, std::setw

// int main()
// {
// 	// setfill is x and width is set as 10
// 	std::cout << std::setfill('x') << std::setw(10);

// 	std::cout << 77 << std::endl;

// 	std::string str = "Niloy";

// 	// setfill is x and width is set as 10
// 	// And std::left is used set str to left side
// 	std::cout << std::left << std::setfill('x') << std::setw(10);

// 	std::cout << str << std::endl;
// 	return 0;
// }


// CPP Program to print
// pattern using std::setw and std::fill
#include <iostream>
#include <iomanip> 

int main()
{
	int n = 5;
	for (int i = 1; i <= n; i++) {
		std::cout << std::left << std::setfill(' ') << std::setw(n);
		std::cout << std::string(i, '*') << std::endl;
	}
}


