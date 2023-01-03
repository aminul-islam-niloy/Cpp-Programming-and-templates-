#include<iostream>
using namespace std;

int main(){
    int n, a=0; 
    int b=1;
    int m;

    cout<<"Enter Number to: ";
    cin>>n;
     
     cout<<"Series is "<<a<<" "<<b<<" ";
    
    for(int i=3; i<=n; i++){

        m= a+b;

        cout<<" "<<m;

        a=b;
        b=m;


    }

}