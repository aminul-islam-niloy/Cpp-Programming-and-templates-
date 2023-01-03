 
#include <bits/stdc++.h>
using namespace std;
 
int a[5];
int main()
{
    // Values in a[] are 0
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
 
    // Values in b[] are garbage
    cout << endl;
    int b[5];
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
 
    return 0;
}

// CPP Program to set the value of all elements to zero of
// an array in a function
// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
// 	// Values in a[] are 0
// 	int a[5] = {};
// 	for (int i = 0; i < 5; i++)
// 		cout << a[i] << " ";

// 	// Values in b[] are garbage
// 	cout << endl;
// 	int b[5];
// 	for (int i = 0; i < 5; i++)
// 		cout << b[i] << " ";

// 	return 0;
// }
