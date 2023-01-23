#include <iostream>
using namespace std;
 
// Function declaration
unsigned long long Findfact(int num);
 
int main()
{
    int num;
    unsigned long long factorial;
 
    // Inputting an integer from user
    cout<<"Enter any number: ";
    cin>>num;
 
    factorial = Findfact(num);
 
    cout<<"Factorial of " <<num<< " is "<<factorial;
 
    return 0;
}
 
unsigned long long Findfact(int num)
{
    if(num == 0)
        return 1;
    else
        return num * Findfact(num - 1);
}