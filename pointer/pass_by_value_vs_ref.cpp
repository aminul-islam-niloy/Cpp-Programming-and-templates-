#include<iostream>
using namespace std;

void display( int n){
    n=20;
}

void display_p( int *n){
    *n=100;
}

int main(){

    cout<< " Call by value" << endl;

    int x= 10;
    cout << " Before calling : " << x<< endl;
     display(x);  
     cout << " After calling : " << x<< endl;

 cout << "\n";

        cout<< " Call by reference" << endl;

    int y= 50;
    cout << " Before calling : " << y<< endl;
     display_p(&y);  
     cout << " After calling : " << y<< endl;


    
}