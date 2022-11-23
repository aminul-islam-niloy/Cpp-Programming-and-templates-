#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &ref=a;
    
    ref=20;
    cout<<a<<endl;

    a=30;
    cout<<"ref ="<<ref;

}