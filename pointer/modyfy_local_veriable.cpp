#include<iostream>
using namespace std;

void fun(int &x){
    x=20;
}
int main (){
int x=10;
       fun(x);
    cout<<x<<endl;
}

    
