
//isalpha(),isalnum(), isdigit(), isblank(), isspace(),
// iscntrl(), isprint(), isxdigit(), ispunct()


// C++ program to demonstrate isalpha()

#include<bits/stdc++.h>
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
	char ch[] = "g142d";
    int size= strlen(ch);

	for (int i = 0; i < size; i++) {
		if (isalpha(ch[i]))
			cout << ch[i] << " is alphabet" << endl;

		// else if (isalnum(ch[i]))
        //     cout << ch[i] << " is alphanumeric" << endl;
           else  if (isdigit(ch[i]))
            cout << ch[i] << " is digit" << endl;
            
            // else if (isblank(ch[i]))
            // cout << " Character is blank" << endl;
        
        else
			cout << ch[i] << " Others" << endl;
	}


}


// C++ program to demonstrate isblank()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[4] = " \n\t";

// 	// checking for isblank() function
// 	for (int i = 0; i < 3; i++) {
// 		if (isblank(ch[i]))
// 			cout << " Character is blank" << endl;
// 		else
// 			cout << " Character is not blank" << endl;
// 	}
// }

// C++ program to demonstrate isspace()
// #include <cctype>
// #include <iostream>
// using namespace std;

// int main()
// {
// 	// initializing character array
// 	char ch[4] = " \n\t";

// 	// checking for isspace() function
// 	for (int i = 0; i < 3; i++) {
// 		if (isspace(ch[i]))
// 			cout << " Character is space" << endl;
// 		else
// 			cout << " Character is not space" << endl;
// 	}
// }


// C++ program to demonstrate iscntrl()
// #include <cctype>
// #include <iostream>
// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
// 	char ch[] = "ttt\n\t";
//     int size= strlen(ch);

// 	// checking for iscntrl() function
// 	for (int i = 0; i < size; i++) {
// 		if (iscntrl(ch[i]))
// 			cout << " Character is control code " << endl;
// 		else
// 			cout << " Character is not control code"
// 				<< endl;
// 	}
// }


// C++ program to demonstrate isprint()
// #include <cctype>
// #include <iostream>
// using namespace std;

// int main()
// {

// 	char ch[7] = "\t@g f1";

// 	for (int i = 0; i < 5; i++) {
// 		if (isprint(ch[i]))
// 			cout << ch[i] << " is printable character "
// 				<< endl;
// 		else
// 			cout << ch[i] << " is not printable Character"
// 				<< endl;
// 	}
// }


// C++ program to demonstrate isxdigit()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[6] = "\t@gf1";

// 	// checking for isxdigit() function
// 	for (int i = 0; i < 5; i++) {
// 		if (isxdigit(ch[i]))
// 			cout << ch[i] << " is hexadecimal Character"
// 				<< endl;
// 		else
// 			cout << ch[i] << " is not hexadecimal Character"
// 				<< endl;
// 	}
// }


// C++ program to demonstrate ispunct()
// #include <cctype>
// #include <iostream>
// using namespace std;
// int main()
// {
// 	char ch[6] = "\t@gf1";

// 	// checking for ispunct() function
// 	for (int i = 0; i < 5; i++) {
// 		if (ispunct(ch[i]))
// 			cout << ch[i] << " is punctuation mark" << endl;
// 		else
// 			cout << ch[i] << " is not punctuation mark"
// 				<< endl;
// 	}
// }


