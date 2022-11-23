#include<iostream>
using namespace std;

int main(){

    string s= "FF";
    
    //Convert string to unsigned integer. 
    unsigned long num= stoul(s,nullptr,16);

    cout<<num<< "\n";

   //Convert string to unsigned long long
    string st= "FFFF";
    unsigned long long num2= stoull(st,nullptr,16);

    cout<<num2<< "\n";
    
}