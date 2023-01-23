#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int num, product=1;
 
     //Reading a number from user
    cout<<"Enter any number:";
    cin>>num;
 
    // Repeat the steps till n becomes 0
    while(num != 0)
    {
        product = product * (num % 10);
 
        // Remove the last digit from n
        num = num / 10;
    }
 
    cout<<"Product of digits: "<<product;
 
    return 0;
}