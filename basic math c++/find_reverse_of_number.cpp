#include<iostream>
#include<math.h>
using namespace std;

int reverse(int num)
{
    int digit= (int)log10(num);

    if(num==0)
    return 0;
    
    return((num%10*pow(10,digit)) + reverse(num/10) );

}

int main(){
    int num;
    cin>>num;

    int rev= reverse(num);
    cout<<"Reverse is "<<rev;
    

    //return ((num%10 * pow(10, digit)) + reverseNumber(num/10));

}
