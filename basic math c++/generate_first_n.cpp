// C++ program to generate the first n terms of the sequence


#include<iostream>

using namespace std;

int main( )
{
int f=0, s=1, t, n, ct;

cout<<"Enter the no. of terms:";
cin>>n;
cout<<"Fibonacci series:";
cout<< f <<" " << s;

for( ct=3; ct<=10; ct++)
{
t=f+s;
cout<<" "<< t << " ";
f=s;
s=t;
}

}