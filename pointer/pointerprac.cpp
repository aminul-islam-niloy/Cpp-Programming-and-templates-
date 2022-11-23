#include<iostream>
using namespace std;
int main(){
    int var = 30;

    int *ptr= &var;
    cout<<&var<<ptr;

    *ptr= 20;
    cout<<*ptr;
}