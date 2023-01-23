#include<iostream>
using namespace std;

int main(){
    int a, b,c,n;
    cout<<"Test case: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;

        swap(a,b);

        cout<<"A is "<<a<<" B is "<<b<<endl;
        
    }

}