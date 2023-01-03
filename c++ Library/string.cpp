// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
// #include <iostream>
// #include <string> // for string class
// using namespace std;

// int main()
// {
// 	string str;
// 	getline(cin, str);
// 	cout << "The initial string is : ";
// 	cout << str << endl;

// 	// Inserting a character
// 	str.push_back('s');

// 	// Displaying string
// 	cout << "The string after push_back operation is : ";
// 	cout << str << endl;

// 	// Deleting a character
// 	str.pop_back();

// 	// Displaying string
// 	cout << "The string after pop_back operation is : ";
// 	cout << str << endl;

// 	return 0;
// }






// C++ Program to demonstrate the working of
// capacity(), resize() and shrink_to_fit()
// #include <iostream>
// #include <string> // for string class
// using namespace std;

// // Driver Code
// int main()
// {

// 	string str = "aminul islam niloy is my name";
// 	cout << "The initial string is : ";
// 	cout << str << endl;

// 	// Resizing string using resize()
// 	str.resize(13);
// 	cout << "The string after resize operation is : ";
// 	cout << str << endl;

// 	cout << "The capacity of string is : ";
// 	cout << str.capacity() << endl;

// 	cout << "The length of the string is :" << str.length()
// 		<< endl;

// 	// Decreasing the capacity of string
// 	// using shrink_to_fit()
// 	str.shrink_to_fit();

// 	// Displaying string
// 	cout << "The new capacity after shrinking is : ";
// 	cout << str.capacity() << endl;

// 	return 0;
// }



// C++ Program to demonstrate the working of
// copy() and swap()
#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
	// Initializing 1st string
	string str1 = "aminul is my first Name";

	// Declaring 2nd string
	string str2 = "aminul islam is good name";

	// Declaring character array
	char ch[80];

	// using copy() to copy elements into char array copies
	str1.copy(ch, 13, 0);

	// Displaying char array
	cout << "The new copied character array is : ";
	cout << ch << endl;

	// Displaying strings before swapping
	cout << "The 1st string before swapping is : ";
	cout << str1 << endl;
	cout << "The 2nd string before swapping is : ";
	cout << str2 << endl;

	// using swap() to swap string content
	str1.swap(str2);

	// Displaying strings after swapping
	cout << "The 1st string after swapping is : ";
	cout << str1 << endl;
	cout << "The 2nd string after swapping is : ";
	cout << str2 << endl;

	return 0;
}
