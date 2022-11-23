#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
cout <<" Enter 3 number : ";
cin>> num1>>num2>> num3;

    if( num1 & num2 <num3)
    cout<< " num3 is largest"<<endl;
    else if(num2 & num3 < num1)
    cout<< " num 1 is largest"<< endl;

    else 
    cout << " num2 is largest";
    
return 0;

}