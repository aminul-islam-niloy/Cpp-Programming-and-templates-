// C++ code to demonstrate the
// use of round() function
#include <cmath>
#include <iostream>
using namespace std;
  
// Driver program
int main()
{
    // initializing value
    double x = 12.5, y = 13.3, z = 14.8;
  
    // Displaying the nearest values
    // of x, y and z
    cout << "Nearest value of x :" << round(x) << "\n";
    cout << "Nearest value of y :" << round(y) << "\n";
    cout << "Nearest value of z :" << round(z) << "\n";
  
    // For lround
    cout << "lround(-0.0) = " << lround(-0.0) << "\n";
    cout << "lround(2.3) = " << lround(2.3) << "\n";
    cout << "lround(2.5) = " << lround(2.5) << "\n";
    cout << "lround(2.7) = " << lround(2.7) << "\n";
    cout << "lround(-2.3) = " << lround(-2.3) << "\n";
    cout << "lround(-2.5) = " << lround(-2.5) << "\n";
    cout << "lround(-2.7) = " << lround(-2.7) << "\n";
  
    // For llround
    cout << "llround(-0.01234) = " << llround(-0.01234) << "\n";
    cout << "llround(2.3563) = " << llround(2.3563) << "\n";
    cout << "llround(2.555) = " << llround(2.555) << "\n";
    cout << "llround(2.7896) = " << llround(2.7896) << "\n";
    cout << "llround(-2.323) = " << llround(-2.323) << "\n";
    cout << "llround(-2.5258) = " << llround(-2.5258) << "\n";
    cout << "llround(-2.71236) = " << llround(-2.71236) << "\n";
  
    return 0;
}