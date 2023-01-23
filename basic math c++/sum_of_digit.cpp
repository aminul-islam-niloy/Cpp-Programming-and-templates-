#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cin>>n;

    for( sum=0; n>0; n=n/10)
    {
        sum= sum+(n%10);
    }

    cout<<sum;
}