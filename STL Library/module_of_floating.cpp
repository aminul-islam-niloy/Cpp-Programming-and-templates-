// C++ program to find modulo of floating
// point numbers.
// #include <bits/stdc++.h>
// using namespace std;
 
// double findMod(double a, double b)
// {
//     double mod;
//     // Handling negative values
//     if (a < 0)
//         mod = -a;
//     else
//         mod =  a;
//         cout<<"present 1 mood: "<< mod<<endl;

//     if (b < 0)
//         b = -b;
//   cout<<"present 1 b : "<< b<<endl;
//     // Finding mod by repeated subtraction
     
//     while (mod >= b)
   
//         mod = mod - b;

//         //9.7 >= 2.3
//  cout<<"present 2 mood: "<< mod<<endl;
 
//  cout<<" present a and b "<<a<< ' '<<b<<endl;

//     // Sign of result typically depends
//     // on sign of a.

//     if (a < 0)
//         return -mod;
 
//     return mod;
// }
 
// // Driver Function
// int main()
// {
//     double a = 9.7, b = 2.3;
//     cout << findMod(a, b);
//     return 0;
// }


// CPP program to find modulo of floating
// point numbers using library function.

#include <bits/stdc++.h>
using namespace std;
 
// Driver Function
int main()
{
    double a = 9.7, b = 2.3;
    cout << fmod(a, b);
    return 0;
}