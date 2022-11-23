#include<iostream>
using namespace std;

int main(){

    int x=5;
    int *p;
    p = &x;

cout<< x << endl;
cout << &x << endl;
cout << p<< endl;
cout << *p << endl;

*p= 10;

cout<<"After  Adding *p= 20";
cout<< x << endl;
cout << &x << endl;
cout << p<< endl;
cout << *p << endl;







    return 0;
}