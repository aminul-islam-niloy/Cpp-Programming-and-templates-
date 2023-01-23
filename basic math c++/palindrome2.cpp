#include <iostream>
#include <math.h>
using namespace std;
 
// Function declarations
int reverseNumber(int num);
int isPalindrome(int num);
 
int main()
{
    int num;
 
    // Inputting any number from user
    cout<<"Enter any number: ";
    cin>>num;
 
    if(isPalindrome(num) == 1)
    {
        cout<<num<<" is palindrome number";
    }
    else
    {
        cout<<num<<" is NOT palindrome number";
    }
 
    return 0;
}
 
 
int isPalindrome(int num)
{
 
    if(num == reverseNumber(num))
    {
        return 1;
    }
 
    return 0;
}
 
 
int reverseNumber(int num)
{
    // Finding number of digits in num
    int digit = (int)log10(num);
 
 
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}