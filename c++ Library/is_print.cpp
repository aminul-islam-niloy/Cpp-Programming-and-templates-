// // CPP program to count printable characters in a string, iscontrol()
// #include <iostream>
// #include <cstring>
// #include <cctype>
// using namespace std;

// // function to calculate printable characters
// // void space(string& str)
// // {
// // 	int count = 0;
// // 	int length = str.length();
// // 	for (int i = 0; i < length; i++) {
// // 		int c = str[i];
// // 		if (isprint(c))
// // 			count++;
// // 	}
// // 	cout << count;
// // }

// // function to calculate control characters
// void space(string& str)
// {
// 	int count = 0;
// 	int length = str.length();
// 	for (int i = 0; i < length; i++) {
// 		int c = str[i];
// 		if (iscntrl(c))
// 			count++;
// 	}
// 	cout << count;
// }


// int main()
// {
// 	string str = "\t;My name \n is \n Aminul Islam_Niloy \n";
// 	space(str);
// 	return 0;
// }





// CPP program to print a string until a control character
#include <iostream>
#include <cstring>

#include<cstdio>
using namespace std;

// function to print string until a control character
int space(string& str)
{
	int i=0;
while (!iscntrl(str[i]))
{
	putchar (str[i]);
	i++;
}
return 0;
}

int main()
{
	string str = "My name is \n Niloy";
    //string str = "My name is  Niloy";
	space(str);
	return 0;
}








