#include<bits/stdc++.h>
using namespace std;

int main(){ 
    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    int rev=0;
    int result=n;

    while(n>0)
    {
        int last= n%10;
        rev= rev*10+last;
        n=n/10;
    }

    if(result==rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome number";
    }

}