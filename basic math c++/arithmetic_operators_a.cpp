#include<iostream>
#include<iomanip>

using namespace std;

int main(){

double number, a,b, add,sub,mul,div,mod;

cout << "Enter 1st number :";
cin >> a;
cout << "Enter 2nd number :";
cin >> b;

cout<< showpoint;
cout<< fixed;
cout<< setprecision(3);

    add = a+b;

    cout<< setw(20)<<"addition is : "<<add<<endl;
    sub= a-b;
    cout<<  setw(20)<< "subtraction is : "<<sub<<endl;
    mul=a*b;
    cout <<  setw(20)<< "multiplaction is : "<<mul<<endl;
    div=a/b;
    cout <<  setw(20)<< "division is : "<<div<<endl;
    mod=(int)a %(int) b;
    cout <<  setw(20)<< "modulus is : "<<mod<<endl;


    return 0;
}