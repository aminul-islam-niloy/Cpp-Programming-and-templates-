#include<iostream>
using namespace std;

int main(){
    int x=10;

    cout<<"Before plaement new : "<<endl;
    cout<<"X is : "<< x <<endl;
    cout<<"&X is: "<<&x<<endl;

    cout<<"Placement new changes :"<<endl;

    int *mem = new (&x) int(100);

     cout<<"After plaement new : "<<endl;
     cout<<"X is : "<< x <<endl;
     cout<<"&X is: "<<&x<<endl;
     cout<< "mem is : "<<mem <<endl;

}