// CPP program to demonstrate memset
// #include <cstring>
// #include <iostream>
// using namespace std;
  
// // Driver Code
// int main()
// {
//     char str[] = "my name is niloy";
//     memset(str, 'a', sizeof(str));
//     cout << str;
//     return 0;
// }


// set all values as 0 or -1 for integral data types also
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
  
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  
    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;


    // all elements of A are 2
    memset(a, 2, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;


    // all elements of A are 3
    memset(a, 3, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  

    // all elements of A are 4
    memset(a, 4, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;


    // all elements of A are -4
    memset(a, -4, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    // Would not work
    memset(a, 5, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

}