// C program to demonstrate the problem when
// fgets()/gets() is used after scanf()
// #include <stdio.h>
  
// int main()
// {
//     int x;
//     char str[100];
//     scanf("%d\n", &x);
//     fgets(str, 100, stdin);
//     printf("x = %d, str = %s", x, str);
//     return 0;
// }

// C program to demonstrate the problem when
// scanf() is used in a loop
// #include <stdio.h>
  
// // Driver Code
// int main()
// {
//     char c;
//     printf("Press q to quit\n");
//     do {
//         printf("Enter a character\n");
//         scanf("%c\n", &c);
//         printf("%c\n", c);
//     } while (c != 'q');
//     return 0;
// }

// A simple C++ program to show working of getline
// #include <cstring>
// #include <iostream>
// using namespace std;
// int main()
// {
// 	string str;
// 	int t = 4;
// 	while (t--) {
// 		// Read a line from standard input in str
// 		getline(cin, str);
// 		cout << str << " : newline" << endl;
// 	}
// 	return 0;
// }

// C++ program to take unknown number
// of integers from user.
#include <iostream>
using namespace std;
int main()
{
	int input;
	int count = 0;
	cout << "To stop enter anything except integer";
	cout << "\nEnter Your Input::";

	// cin returns false when anything
	// is entered except integer
	while (cin >> input)
		count++;
	
	cout << "\nTotal number of inputs entered: "
		<< count;
	return 0;
}



