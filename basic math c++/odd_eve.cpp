#include <iostream>
using namespace std;
 
bool isEven(int num)
{
    if(num%2==0){
  return true;
    }
    else 
    return false;
  
}
 
int main(){
 
    int num;
 
    cout<<"Enter any number: ";
    cin>>num;
 
    if(isEven(num))
    {
        cout<<"The entered number is even.";
    }
    else
    {

        cout<<"The entered number is odd.";
    }
 
    return 0;
 
}