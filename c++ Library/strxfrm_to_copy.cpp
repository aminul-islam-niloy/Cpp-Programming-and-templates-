// C++ program to demonstrate strxfrm()
//if we want to copy a spacefic value into a new one then we can use strxfrm()

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str2[30] = "Hello Aminul Islam Niloy";
	char str1[30];
	cout << strxfrm(str1, str2, 10) << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}
